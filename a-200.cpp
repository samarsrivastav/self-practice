#include <iostream>
using namespace std;

int main(){
int x,y,t;
cin>>x>>y;
t=(y-x)/10;
if ((y-x)%10==0)
{
   cout<<t<<endl;
}
else if(y<x){
    cout<<0<<endl;
}
else
cout<<t+1<<endl;


    return 0;
}