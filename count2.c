#include<stdio.h>
#include<conio.h>
int main(void) 
{
 clrscr();
 
	int 1,r,i,j,count=0,flag=1;
  
	scanf("%d",&l);
  
	scanf(" %d",&r);

	if(l==2)
	{
		count++;
	}
	for(i=l;i<=r;i++)
	{
  
		for(j=2;j<i;j++)
    
		{
			if(i%j==0)
      
			{
				flag=0;
        
				break;
				
			}
			
		}
			if(flag==1)
      
			{
      
				count=count+1;
			}
		
		
	}

	printf("\n%d",count);
  
	return 0;
}
