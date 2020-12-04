#include<bits/stdc++.h>

using namespace std;

class Area{       
  public: 
  	int a,b;

Area(int x,int y){
	a=x;b=y;

}

float returnArea(){
	return a*b;
}






  
};




int main()
{
    

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    
    float a,b,x;
    cin>>a>>b;
    Area ob=Area(a,b);
    x=ob.returnArea();
    cout<<x<<endl;   
    



        
        
}
