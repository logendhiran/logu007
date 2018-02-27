#include<stdio.h>
int main()
{
	int n,m,i,g,l;

	scanf("%d %d",&n,&m);
	
	for(i=2;i<=n&&i<=m;i++)

	{
              if(n%i==0&&m%i==0)
              g=i;
	}

	l=(n*m)/g;
	printf("%d",l);
	return 0;
}
