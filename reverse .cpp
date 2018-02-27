#include<iostream.h>
#include<string.h>
void main()
{
char str[100],tempv;

int i,j=0;

cout<<"ENTER THE STRING:";

cin>>str[100];
i=0;

j=strlen(str)-1;

while(i<j)

{
tempv=str[i];

str[i]=str[j];

str[j]=tempv;

i++;
j--;
}
cout<<"REVERSE STRING IS: "<<str;
getch();
}
