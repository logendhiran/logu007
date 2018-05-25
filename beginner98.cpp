#include <iostream>
using namespace std;
int main() 
{
	int n,i,a[10];
	cin>>n;  
	for(i=1;i<=n;i++)  
	{  
		cin>>a[i];    
		if(a[i]!=i)    
		{
    
			cout<<i;      
			break;
      
		}    
	}
	return 0;
}
