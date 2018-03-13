#include <stdio.h>

#include <conio.h>

int main(void) 
{
	int i, num, array[100], sum=0, avg;
  
	printf("enter the size of the array");
  
	scanf("%d",&num);
  
	printf("enter the array elements");
  
	for(i=0;i<num;i++)
  
	{
  
		scanf("%d",&array[i]);
    
	
	}
  
	for(i=0;i<num;i++)
  
	{
  
		sum=sum+array[i];
    
    
	}
  
	avg=sum/num;
  
	printf("\n%d",sum);
  
	printf("\n%d",avg);
  
	return 0;
}
