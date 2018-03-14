#include<stdio.h>
#include<conio.h>
int main()
{ 
  clrscr();
  
	int i;
  
	char s[100],count1=0,count2=0;
  
	gets(s);
  
	for(i=0;s[i]!='\0';i++)
  
	{
  
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
    
		{
    
			count1++;
      
		}
    
		if(s[i]>='0' && s[i]<='9')
    
		{
			count2++;
		}
    
	}
  
	if((count1 && count2)>0)
  
	printf("yes");
  
	else
  
	printf("no");
}
return 0;
}
