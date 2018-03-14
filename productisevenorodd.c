#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    
    int n,m,p;
    
    printf("Enter the two numbers");
    
    scanf("%d %d",&n,&m);

    p=n*m;

    if(p%2==0)
    
{
    printf("even");
}

    else
    
{
    printf("odd");
 }
 
    return 0;
    
}
