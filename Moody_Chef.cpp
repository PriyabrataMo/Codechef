#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>
#define ll long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t){
	    ll maxi = 0;
	    ll mini = 0;
	    ll n , l , r;
	    cin>>n>>l>>r;
	    vi a(n,0);
	    ll ans = 0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]>=l&&a[i]<=r){
	            ans++;
	            
	            maxi = max(ans, maxi);
	            mini = min(ans , mini);
	            
	        }
	        else{
                ans--;
	            maxi = max(ans,maxi);
	            mini = min(ans , mini);
	        }
	    }
	    cout<<maxi<<" "<<mini<<endl;
	    t--;
	}
	return 0;
}
