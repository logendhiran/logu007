#include<stdio.h>
#include<string.h>
int main()
{
int i,flag;

char a[500];

printf("enter the string:");

scanf("%s",a);

for(i=0;i<strlen(a);i++)

{

a[i]=tolower(a[i]);

}

for(i=0;i<strlen(a);i++)

{
if(a[i]==a[i+1])
{

    flag=1;
    break;    
}
}
if(flag==1)
{
printf("FALSE");
}
else
{
printf("true");
}
return 0;
}
