#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>
#define ll long long int
#define vi vector<ll>
#define vvi vector<vi>
#define pb push_back
using namespace std;
void print(vector<ll> a){
    for(ll i=0;i<a.size();i++){
        cout<<a[i]<<" " ;
    }
    cout<<endl;
}
void printyes(){
    cout<<"YES"<<endl;
}
void printno(){
    cout<<"NO"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
	    cin>>n;
	    set<int> s;
	    vi a(n);
	    vi ans;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        s.insert(a[i]);
	    }
	    for(auto it:s){
	        ans.push_back(it);
	    }
	    reverse(a.begin(),a.end());
	    print(a);
	    
	    
	    

    }
    return 0;
}