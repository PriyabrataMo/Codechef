
#include <bits/stdc++.h>
using namespace std;
#include<string.h>

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int count = 0;
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;

            if(x>=s){
                count++;
            }
        }
        cout<<count<<endl;
        
        
        

        
    	
    }
	return 0;
}
