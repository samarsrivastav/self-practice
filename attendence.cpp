#include <iostream>
using namespace std;
int sum(int *arr,int n){
  int s=0;
    for(int i=0;i<n;i++){
        s=s+arr[i];
    }
    return s;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	   cin>>n;
	   int arr[120]={0};
	   for(int i=0;i<n;i++){
	       cin>>arr[i];
	   }
	   // for(int i=0;i<n;i++){
	   //    cout<<arr[i];
	       
	   //}
	   int rem=120-n;
	   
	   int x=sum(arr,n)+rem;
	  cout<<sum(arr,n)<<endl;;
	   // if(x>=90){
	   //     cout<<"yes"<<endl;
	   // }
	   // else{
	   //     cout<<"no"<<endl;
	   // }
	}
	return 0;
}
