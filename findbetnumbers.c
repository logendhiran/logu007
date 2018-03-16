#include<stdio.h>
#include<conio.h>
int main(void) 
{
  clrscr();
	int n,l,r;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter the first and last range:");
	scanf("%d %d",&l,&r);
	if(n>l && n<r)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
