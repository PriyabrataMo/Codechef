
#include <bits/stdc++.h>
using namespace std;
#include<string.h>

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        
        
        
        int i;
        for( i=1;i<n;i++){
            int k = i+s;
            s = k;
            if(k>=n){
                break;
            }
        }
        

        
        
        
        cout<<i<<endl;

        
    	
    }
	return 0;
}
