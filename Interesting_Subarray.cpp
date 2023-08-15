
#include <bits/stdc++.h>
using namespace std;
#include<string.h>

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        int ma=INT_MIN , mi=INT_MAX;
        for(int i = 0;i<n;i++){
            int x ;
            cin>>x;
            cout<<x<<endl;
            if(x<mi){
                mi= x;

            }
            if(x>ma){
                ma=x;
            }
        }
        int j,k;
        j = mi*mi;
        k = ma*ma;
        cout<<j<<" "<<k<<endl;
    	
    	
    }
	return 0;
}
