#include<iostream.h>
#include<string>
using namespace std;
int main()
{
char str[30];
int n,i;
cout<<"Enter the string:";
cin>>"%s",str;
n=strlen(str);
if(n%2==0)
{
str[n/2]='*';
str[(n/2)-1]='*';
}
else
{
str[n/2]='*';
}
cout<<"\n %s",str;
return 0;
}
