#include<iostream>
using namespace std;
int main()
{
 int i,n,c=0;
 cout<<"Enter the number: ";
 cin>>n;
 cout<<endl<<"The Factors are: "<<endl;
 for(i=2;i<=n;i++)
   {
       if(n%i==0)
        {
     cout << i <<endl ;
          c++;
          
      }
   }
  if(c==2)
  cout<<n<<" is a Prime Number";
  else
  cout<<n<<" is Composite Number. !!";
}
