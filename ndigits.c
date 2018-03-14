#include <stdio.h>
#include <conio.h>
 int main() 

{
   clrscr();
   
    int n,rev=0,remain;

    scanf("%d",&n);

    while(n!='\0')


    {
        remain=n%10;
        rev=(rev*10)+remain;
        n=n/10;
    }

    n=rev;

    while(n!='\0')

    {
        remain=n%10;
        printf("%d ",remain);
        n=n/10;

	}
	return 0;
}
