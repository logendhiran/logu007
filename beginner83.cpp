#include <iostream>

using namespace std;

int main()
{
    double length,breadth,area=0;
    cin>>length>>breadth;
    while(length==0 || breadth ==0)
    {
    cout<<"the area of farm =0";
    }
    else
    {
 
    area=length*breadth;
    
    cout<<"the area of farm:"<<area<<endl;
    }
    
    return 0;
}
 
