
#include<iostream>
using namespace std;
int main()
{
    int num,i,a[10],sum=0;
    
    cin>>num;
    
    for(i=0;i<num;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}
