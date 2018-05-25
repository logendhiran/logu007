#include<iostream>

using namespace std;

int main()
{
int n,mul=1,rem=0;

cin>>n;

while(n!='\0')
{
    rem=n%10;
    mul=mul*rem;
    n=n/10;
}
cout<<mul;
return 0;
}
