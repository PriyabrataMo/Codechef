#include <iostream>
using namespace std;
#include<string.h>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>s>>n;
	    float p = 0.9*s;
	    if(p>n){
	        cout<<"dining"<<endl;
	    }
	    else if(p<n){
	       cout<<"online"<<endl;
	    }
	    else{
	        cout<<"EITHER"<<endl;
	    }
	    
	}
	return 0;
}
