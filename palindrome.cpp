#include<iostream.h>
#include<conio.h>
void main()
{
int num, reverse=0, num=0;
cout<<"Enter number: ";
cin>>num;
temp=num;
for(int i=1;num!=0;i++)
{
num=palindrome%10;
num=num/10;
reverse=num+(reverse*10);
}
if(reverse==temp)
{
cout<<" Palindrome Number";
}
else
{
cout<<"Not a Palindrome Number";
}
getch();
}
