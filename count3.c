#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
   clrscr();
    char s[1000];
    int l,count=0,i,c;
    gets(s);
    
    l=strlen(s);

    for(i=0;i<l;i++)
     {
        if(s[i]==' ')
        count++;
        
    }
   
    c=l-count;
    printf("%d",c);
    return 0;    
    
}
