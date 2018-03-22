#include <stdio.h>
#include<conio.h>
int main(void)
{
 clrscr();
 
	int n,k,i,min;
  
	scanf("%d%d",&n,&k);
  
	i=n;
  
	while(i!=0)
  
	{
		if(i%n==0||i%k==0)
    
		{
			min=i;
      
		}
		i--;
    
	}
	printf("%d",min);
  
	return 0;
  
}

    
