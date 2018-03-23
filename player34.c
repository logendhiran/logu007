#include <stdio.h>
#include<conio.h>
int main(void)
{
 clrscr();
 
char a[20];

int flag=0,i;

scanf("%s",a);

for(i=0;a[i]!='\0';i++)
{
    if(a[i]>='0'||a[i]<='9')
    {
        flag=1;
    }
}

if(flag==1)

{

printf("\nYES ,this no is numeric");

}

else

{

printf("\n No, this is not numeric");

}

	return 0;
}
