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
void yesprint(){
    cout<<"YES"<<endl;
}
void noprint(){
    cout<<"NO"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    
    
    
    ll ans = a[n-1];
    int ind = 2;
    for(ll i=n-2;i>=0;i--){
        ll pre = a[i]*ind;
        ans = max(ans,pre);
        ind++;

    }
    cout<<ans<<endl;
    }
    return 0;
}