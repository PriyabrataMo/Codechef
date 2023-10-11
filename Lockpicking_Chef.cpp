#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>


using namespace std;
int check(string &s,string &k,int &m){
    int op = 0;
    for(int i=0;i<m;i++){
        int ki = int(k[i])-48;
        int si = int(s[i])-48;
        int sub =abs(ki-si);
        
        op += min(sub,10-sub);
        
    }
    return op;
}
int mini(string &s,string &k,int &n,int &m){
    
    int op = INT_MAX;
    for(int i=0;i<n-m+1;i++){
        
        string sub = s.substr(i,m);
        
        op = min(check(sub,k,m),op);

    }

    return op;

}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    string s,k;
	    cin>>n>>m;
	    cin>>s>>k;
        int ans = mini(s,k,n,m);
        cout<<ans<<endl;

	    
	    
	    
	}
	return 0;
}
