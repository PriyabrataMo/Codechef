#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>


using namespace std;
int check(vector<int> &a,int n,int m,int s){
    int ans = 0;
    for(int i=0;i<n;i++){
        if(m<a[i]){
            s=s-a[i];
        }
    }
    
    return s;
}
int main() {
	int t;
	cin>>t;
	while(t--){
        int e,s;

	    cin>>e>>s;
        int ans = 0;
        vector<int> es;
        int r=-1;
        for(int i=0;i<e;i++){
            int x;
            cin>>x;
            r = max(r,x);
            es.push_back(x);
        }
        int l = 0;
        while(ans<r){
            
            int an = check(es,e,ans,s);
            if(an>0){
                break;
            }
            ans++;

        }
        cout<<ans<<endl;

	    
	}
	return 0;
}
