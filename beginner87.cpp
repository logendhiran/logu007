#include <iostream>
using namespace std;
int main()
{
    int n1, n2, i, gcd;

    cout<<"Enter  any two integers: ";
    
    cin>>n1, n2;

    for(i=1; i <= n1 && i <= n2; ++i)
    
    {
        if(n1%i==0 && n2%i==0)
        
            gcd = i;
    }

    cout<<"G.C.D "<< n1<<n2<<gcd<<endl;

    return 0;
}
