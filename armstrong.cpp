  #include<iostream>
  using namespace std;
  int main()

  {
  int armstrong=0,n=0,result=0,check;
  cout<<"Enter Number to find it is an Armstrong number";
       cin>>num;
       check=num;
       for(int i=1;n!=0;i++){
           armstrong=n%10;
           n=n/10;
           armstrong=armstrong*armstrong*armstrong;
           result=result+armstrong;
       }
       if(result==check){
       cout<<check<<"  is an Armstrong Number";
       }
       else{
       cout<<check<<"  is NOT an Armstrong Number";
       }
       return 0;
    }
