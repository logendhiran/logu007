#include<iostream>
using namespace std;
int main()
{
 int b,num,reverse=0;
 
 cout<<"enter any  number:";
 
 cin>>num;
 
 while(num!=0)
 {
  b=num%10;
  
  reverse=(reverse*10)+b;
  
  num=num/10;
  
   cout<<"reversed number is:%d"<<endl<<reverse;
   }
  return 0;
  }
