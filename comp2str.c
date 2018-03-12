#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(void) 
{
  clrscr();
  
	char str1[60],str2[60];
  
	int a,b;
  
	printf("Enter the string1:");
  
	scanf("%s",str1);
  
	printf("Enter the string2:");
  
	scanf("%s",str2);
  
	a=strlen(str1);
  
	b=strlen(str2);
  
	if(a>b)
	{
		printf("\n%s",str1);
	}
	else if(b>a)
  
	{
		printf("\n%s",str2);
    
	}
  
	else
  
	{
		printf("\n two string are equal length);
    
	}
  
	return 0;
}
