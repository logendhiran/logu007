#include<stdio.h>
#include<conio.h>
int main()
{
  clrscr();
	int n,count=0;

	scanf("%d",&n);

	for(int i=0;i<10;i++)

	{
		if(n==i)
		{
			count++;
		}
	}

	if(count==1)

		{
			printf("yes");
		}

		else

		{
			printf("no");
		}

	return 0;
}
