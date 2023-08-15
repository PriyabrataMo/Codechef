#include <iostream>
using namespace std;
#include<string.h>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count = 0;
	    while(n!=50){
	        if(n>50){
	            n -=3;
	            count++;
	        }
	        if(n<50){
	            n+=2;
	            count++;
	        }
	    }  
        cout<<count<<endl; 
	}
	return 0;
}
