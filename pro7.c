
#include <stdio.h>
int main()
{
    int l, b, i, gcd;

    printf("Enter two integers: ");
    
    scanf("%d %d", &l, &b);

    for(i=1; i <= l && i <= b; ++i)
    {
       
        if(l%i==0 && b%i==0)
        
            gcd = i;
            
    }

    printf("G.C.D of %d and %d is %d", l, b, gcd);

    return 0;
}
