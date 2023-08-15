
#include <bits/stdc++.h>
using namespace std;
#include<string.h>

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,v;
        cin>>n>>k>>v;
        int x = 0;
        for(int i = 0;i<n;i++){
            int f;
            cin>>f;
            x = x+f;
        }
        int req;
        int sum = 0;
        sum = k+n;
        int re = (v*sum)-x;
        if((re>0)&&(re%k==0)){
            cout<<re/k<<endl;

        }
        else{
            cout<<"-1"<<endl;
        }
        
    	
    }
	return 0;
}
