#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	   string c;
	    int n;
        cin>>n;
	    cin>>s;
	    
	    for(int i=0;i<n;i++){
	      if(s[i]=='A'){
	          c+='T';
	      }
	      if(s[i]=='T'){
	         c+='A';
	      }
	      if(s[i]=='G'){
	          c+='C';
	      }
	      if(s[i]=='C'){
	         c+='G';
	      }
	      
	    }
	    cout<<c;
	    cout<<endl;
	}
	
	return 0;
}
