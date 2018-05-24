#include <iostream>

using namespace std;

int main()

{
	int i;
  
	string s;
  
  cout<<"enter  the string";
  
	cin>>s;
  
	for(i=0;s[i]!='\0';i++)
  
	{
  
		if(s[i]>='0' && s[i]<='9')
    
		{
    
			cout<<s[i];
      
		}
    
	}
  
	return 0;
  }
