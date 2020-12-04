#include<bits/stdc++.h>

using namespace std;

class student{       
  public:  
  string name;
  int roll_no;
  string phone_number;
  string address;

  
};



int main()
{
    

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    student Jamshed,shofi;

    
    Jamshed.roll_no=1;
    Jamshed.phone_number="01201654542";
    Jamshed.address="ctg";

    shofi.roll_no=2;
    shofi.phone_number="01201654567";
    shofi.address="dhaka";

    cout<<shofi.roll_no<<" "<<shofi.phone_number<<" "<<shofi.address<<endl;
    cout<<Jamshed.roll_no<<" "<<Jamshed.phone_number<<" "<<Jamshed.address<<endl;




        
        
}


