#include <stdio.h>
#include<conio.h>
int main(void) 
{
clrscr;

	int min,hrs,mins,secs=00;
  
	printf("ENTER THE TIME IN MINUTES:");
  
	scanf("%d",&min);
  
	hrs=min/60;
  
	mins=min%60;
  
	if(mins>60)
	{
  
		secs=mins%60;
		mins=mins-secs;
    
	}
	printf("%d %d %d",hrs,mins,secs);
	return 0;
}
