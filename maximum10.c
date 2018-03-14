#include<stdio.h>
#include<conio.h>
int main()
{ clrscr();
	int a[10],i,max;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%d",max);
  
}
return 0;
}
