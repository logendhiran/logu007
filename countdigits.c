#include <stdio.h>
#include<conio.h>
int main()
{  
    clrscr();
    
    long long num;  
    
    int count = 0;

    printf("Enter the integer: "); 
    
    scanf("%lld", &num);

    while(num  != 0)
    {
        num = num/10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
