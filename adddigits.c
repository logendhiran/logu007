#include <stdio.h>
#include<conio.h>
 
int main(void) 

{
  clrscr();
  
	int n,temp,sum=0;

	printf("enter the number");

	scanf("%d",&n);

	temp=n;
	while(n!=0)

	{
		temp=n%10;
		sum=sum+temp;
		n=n/10;
 
	}
	printf("\n3%d",sum);
	return 0;
}
