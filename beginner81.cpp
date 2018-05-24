#include<iostream>

using namespace std;

int main()

{
  unsigned int a,c,diff1=0,diff2=0;
  
  cout<<"the number of warriors in ninja:"<<endl;
  
  cin>>a;
  
  cout<<"the number of opponent warriors:"<<endl;
  
  cin>>c;
  
   if(a>c)
   
   {  
       diff1=a-c;
   
       cout<<"ninja won="<<diff1<<endl;
   }
   
   else
   
   { 
       diff2=c-a;
       
       cout<<"opponent win by diff="<<diff2<<endl;
       
   }
   return 0;
}
