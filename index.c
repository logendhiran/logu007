#include<stdio.h>
int main(void)
{
	int i,c[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d %d\n",c[i],i);
	}
}
sort(0, n);
for(i = 0; i <n; i++)
   {
      printf("%d\n",c[i]);
   }

return 0;
}
