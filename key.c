#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<linux/input.h>
#include<sys/stat.h>

#define LOGFILE "/tmp/data"

int main(int argc, char **argv)
{
 struct input_event ev;
  int fd = open("/dev/input/event4", O_RDONLY);
  FILE *fp = fopen(LOGFILE, "a");

  while(1){
      read(fd, &ev, sizeof(ev));
      if((ev.type==EV_KEY) && (ev.value==0)){
          printf("%d\n", ev.code);
      }
  }

}