
#include<iostream>
using namespace std;
int main()
{
char str[100];
int len,i;
cin>>str;
len=sizeof(str);
for(i=0;i<len;i++)
{
{
 if(i==0)
 {
                str[0]=toupper(str[0]);
                
                }
                
                if(str[i]==' ')
                
                {
                
                str[i+1]=toupper(str[i+1]);
                
                }
}
cout<<str;
}
return 0;
}
