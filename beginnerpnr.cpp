#include<iostream>

using namespace std;

int main()

{
    float n,si,p,r;
    
   cin>>n>>p>>r;
   
   if(n!=0 &&p!=0 &&r!=0)
   
   {
    si=(p*n*r)/100;
    
    cout<<si;
    }
    else
    {
    
    cout<<"not possible";
    
    }
    
    return 0;
}
