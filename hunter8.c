#include <stdio.h>
int main(void)
{

	int n,b[100],i,j,k;
  
	scanf("%d",&n);
  
	for(i=0;i<n;i++)
  
	{
		scanf("%d",&b[i]);
    
	}
	for(i=0;i<n;i++)
  
	{
		for(j=0;j<n;j++)
    
		{
    
			for(k=0;k<n;k++)
      
			{
				if(b[i]+b[j]==b[k])
        
				{
					printf("%d+%d=%d\n",b[i],b[j],b[k]);
          
				}
			}
		}
	}
	return 0;
}
