#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>


using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
        int q = n/3;
        int r = n%3;
        if(r==1){
            cout<<q<<" "<<q<<" "<<q+r<<endl;
            
        } 
        if(r==2){
            cout<<q+1<<" "<<q+1<<" "<<q<<endl;
            
        }
        if(r==0){
            int a = n-(2*q)+2;
            cout<<q-1<<" "<<q-1<<" "<<a<<endl;
        }

	}
	return 0;
}
