#include <stdio.h>
#include <conio.h>
int main()
{
    clrscr();
    
    char s[40];

    int k,i;
    
    printf("Enter any string");
    
    scanf("%s",s);
    
    printf("Enter the k numbers");
    
    scanf("%d",&k);

    for(i=0;i<k;i++)

    {
        printf("%c",s[i]);

    }

    return 0;
}
