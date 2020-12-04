#include<bits/stdc++.h>

using namespace std;

class Triangle{       
  public: 

  Triangle(int a,int b,int c){
  	float p=(a+b+c)/2;
  	cout<<"perimeter: "<<p<<endl;
  	float x=sqrt(p*(p-a)*(p-b)*(p-c));
  	cout<<"area "<<x<<endl;

  }




  
};




int main()
{
    

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Triangle t=Triangle(3,4,5);
    
    



        
        
}
