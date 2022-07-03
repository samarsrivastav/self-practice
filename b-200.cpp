#include <iostream>
using namespace std;
int search(int arr[]){
 int index=0,ans;
 for (int i = 0; i < 3; i++)
 {
    ans=arr[index];
    index=ans;
 }
 
 return ans;

}

int main(){
int arr[1000000]={};

for (int i = 0; i < 10; i++)
{
    cin>>arr[i];
}
 int ans=search(arr);
 cout<<ans<<endl;

    return 0;
}