#include <stdio.h>
#include <conio.h>
int main()
{
    clrscr();
    
    char a[50], b[50], i, j;

    printf("enter first string: ");

    scanf("%s", a);

    printf("enter second string: ");
    
    scanf("%s", b);
    
    for(i = 0; a[i] != '\0'; ++i);

    for(j = 0; a[j] != '\0'; ++j, ++i)
    
    {
        a[i] = b[j];
    }

    a[i] = '\0';
    printf("After concatenation: %s", a);

    return 0;
}
