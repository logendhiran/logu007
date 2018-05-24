#include<iostream>

using namespace std;

int main()
{
    int n,rev=0,rem=0;
    cout<<"enter the numbers"<<endl;
    
    cin>>n;
    
    while(n!=0)
    {
        rem=n%10;
        
        rev=(rev*10)+rem;
        
        n=n/10;
    }
    n=rev;
    
    while(n!=0)
    {
        rem=n%10;
        
        if(rem%2==1)
        
        {
        
            cout<<"the odd numbers:"<<endl<<rem<<endl;
        } 
        
        n=n/10;
        
    }
    return 0;
}
