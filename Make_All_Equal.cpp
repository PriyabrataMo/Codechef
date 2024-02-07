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
        ll n , m;
        cin>>n>>m;
        vi a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll ma = a[n-1];
        
        ll ans = 0;
        vi diff(n);
        for(int i=0;i<n;i++){
            diff[i] = a[i]-ma;
        }
        int mx = -1;
        for(int i=0;i<n;i++){
            mx = max(ma,diff[i]);
            if(((i+1)%m)==0){
                ans+=mx;
                mx = -1;
            }
        }

        
        cout<<ans<<endl;
    }
    return 0;
}