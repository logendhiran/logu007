#include <stdio.h>
#include<string.h>
#include<conio.h>
int main() 
{
  clrscr();
	int a,b,dif;
	scanf("%d %d",&a,&b);
	dif=a-b;
	if(dif%2==0)
  {
	printf("number is even");
  }
	else
  {
	printf("number is odd");
  }
	return 0;
}
