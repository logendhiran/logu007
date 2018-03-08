#include <stdio.h>
#include <string.h>
#include<conio.h>
int main(int argc, char *argv[])
{
 clrscr();
  size_t maxlen = 0, len;
  int i;
  int longest;
  {
  for (i = 1; i < argc; i++)
  {
   len = strlen(argv[i]);
     if (len > maxlen) 
       longest = argv[i];
  }
}
  printf("longest string are  %s. \n", longest);

  return 0;
}
