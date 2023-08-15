#include <bits/stdc++.h>
#include<vector>
using namespace std;
#include<string.h>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,h;
	    cin>>n>>m>>h;
	    vector<int> c;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        c.push_back(x);
	    }
	    vector <int> p;
	    for(int i=0;i<m;i++){
	        int x;
	        cin>>x;
	        p.push_back(x);
	    }
	    sort(c.begin(),c.end(),greater<int>());
	    sort(p.begin(),p.end(),greater<int>());
	    
	    int charge=0;
	    int k = min(n,m);
	    for(int i=0;i<k;i++){
	        int f = p[i]*h;
	        charge+=min(f,c[i]);
	    }
	    cout<<charge<<endl;
	    
	}
	return 0;
}
