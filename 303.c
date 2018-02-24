#include<stdio.h>
void main()
{
	int n,i,s=0,d=1,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("%d\n",s);
	t=s+d;
	s=d;
	d=t;
	}
}
