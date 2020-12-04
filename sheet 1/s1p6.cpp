#include<bits/stdc++.h>

using namespace std;

class Area{       
  public: 
  	int a,b;

void setDim(int x,int y){
	a=x;b=y;

}

float area(){
	return a*b;
}






  
};




int main()
{
    

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Area ob;
    float a,b,x;
    cin>>a>>b;
    ob.setDim(a,b);
    x=ob.area();
    cout<<x<<endl;   
    



        
        
}
