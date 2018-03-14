#include <stdio.h>

#include<conio.h>
 
int main(void) 

{
  clrscr();
  
	int n,even;

	printf("Enter a number:");

	scanf("%d",&n);
  
	if(n%2==0)

	{
		even=n-2;	
	}
  
	else
	{
		even=n-1;
	}
  
	printf("\n%d",even);
  
	return 0;
}
