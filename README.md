#Introduction

Keylogger is the program to record the input of user via keyboard. it is for educational purpose.As a mutual understanding, it is harm to the threat of user's privacy.
I will go over linux and use C language.
Now , In linux everyting is stored in a file so where all our inputs go one?
Answer is /dev/input/, it maintained a list of events.
How did we know which events stored our keyboard inputs. This can be solve from /proc/bus/input. Here, we find a devices folder from which we can map all the input devices with their respective events. The name of our input device will be "AT Translated Set 2 keyboard" and EV= 120013. You can find the respective event part.

##Coding part
Look after the key.c file in this repository.