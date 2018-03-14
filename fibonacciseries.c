#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int n,f1=0,f2=1,fib;
    scanf("%d",&n);
    printf("%d\n%d\n",f1,f2);
    int i,j;
    for(i=2;i<n;i++)
    {
        fib=f1+f2;
        printf("%d\n",fib);
        f1=f2;
        f2=fib;
        }
        return 0;
}
