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
    ll st = 0;
    ll ans = 0;
    // for(int i=1;i<=n;i++){
    //     if(a[i-1]==i){
            
    //     }
    //     else if(st==0) continue;
    //     else if(st==1) ans++;
    //     else ans+=st-1;
        
    // }
    for(int i=0;i<n-1;i++){
        if(a[i]==i+1){
            swap(a[i],a[i+1]);
            ans++;
        }
        else{
            st++;
        }
    }
    if(a[n-1]==n) ans++;
   
    // if(st==1) ans++;
    // else if(st!=0) ans+=st-1;
    cout<<ans<<endl;
    }
    return 0;
}