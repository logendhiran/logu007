#include<iostream>

using namespace std;

int main()
{

 int i,n,c=0;
 
 cout<<"Enter the number: ";
 
 cin>>n;
 
 cout<<"The possible Factors are: "<<endl;
 {
 for(i=2;i<=n;i++)
   {
       if(n%i==0)
        {
     cout << i <<endl ;
          c++; 
      }
   }
   }
 return 0;
}
