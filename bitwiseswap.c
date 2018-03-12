#include <stdio.h>
#include<conio.h>
int main(void)
{
  clrscr();
  
	int a,b,temp;
  
	scanf("%d %d",&a,&b);
  
	a=a^b;
  
	b=a^b;
  
	a=a^b;
  
	printf("%d %d",a,b);
  
	return 0;
}
