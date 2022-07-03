#include <iostream>
using namespace std;

int paired(int arr[],int n){
 int count{};
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if( arr[i]*arr[j]>0){
                count++;
            }
        }
        
    }
    return count;
}
int main(){
 int arr[1000000]={};
 int t, n;
 cin>>t>>n;
 for (int i = 1; i <= t; i++)
 {
     for (int j = 0; j < n; j++)
     {
         cin>>arr[j];
     }
     int ans= paired(arr,n);
    cout<<ans<<endl;
 }
 
 



    return 0;
}