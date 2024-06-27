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
    vi x(n) , y(n,0);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cin>>y[i];
        y[i] = y[i]-x[i];
    }
    sort(y.begin(),y.end());
    ll l = 0;
    ll r = n-1;
    ll ans = 0;
    while(l<r){
        if(y[l]+y[r]>=0){
            l++;
            r--;
            ans++;
            
        }
        else if(y[l]+y[r]<0){
            
            l++;
        }
        
    }
    cout<<ans<<endl;


    }
    return 0;
}