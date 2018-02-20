#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int year;
	cout<<"Enter year :";
	cin>>yr;
	if((year%4==0) && (year%100!=0))
	{
		cout<<"This is a Leap Year";
	}
	else if(year%100==0)
	{
		cout<<"This is not a Leap Year";
	}
	else if(year%400==0)
	{
		cout<<"This is a Leap Year";
	}
	else
	{
		cout<<"This is not a Leap Year";
	}
	getch();
}
