# Introduction

Keylogger is the program to record the input of user via keyboard. it is for educational purpose.As a mutual understanding, it is harm to the threat of user's privacy.
I will go over linux and use C language.
Now , In linux everyting is stored in a file so where all our inputs go one?
Answer is /dev/input/, it maintained a list of events.
How did we know which events stored our keyboard inputs. This can be solve from /proc/bus/input. Here, we find a devices folder from which we can map all the input devices with their respective events. The name of our input device will be "AT Translated Set 2 keyboard" and EV= 120013. You can find the respective event part.

## Coding part
Look after the key.c file in this repository. We are storing the keys in file called data in "/tmp". This program makes a structure called ev and read the /dev/input/event2(where the input from keyboards are stored) and then save it to our data file. ev.type is a movement on the keyboard taken in EV_KEY and the ev.value is set to 0 as when there is a keypress on a keyboard there is a keyrelease afterwards, so to prevent recording the same value again on keyrelease it is set to 0.

## Mapping part

This is not enough as it will give us the numerical value of the keys and hence we have to go through mapping apprach. We all know that the actual alphabets are stored as a number in somewhere on linux and that somewhere is "/usr/include/linux/input-event-codes.h". 

We can see that the Key "P" is stored as 25 and so similar with others. Now that we have mapped the keystrokes, we are not mapping space, new line and we are printing the value on the terminal one word per line, for this we will modify our code to handle these situations.

Now our code is ready and you all csan see through key.c and all the keyvalues will be store in "/tmp/data".

Look after the key.c file in this repository.
