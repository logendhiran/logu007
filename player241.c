#include <stdio.h>
#include<string.h>
#include<conio.h>
int main(void) 
{
    clrscr();
    
	char str[30];
	int i,n;
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			str[i]='+';
		}
	}
	for(i=n;i>=0;i--)
	{
		if(str[i]!='+')
		{
			printf("%c",str[i]);
		}
	}
 
	return 0;
}
 
