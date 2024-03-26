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
    ll s = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
   
    ll ans = s+a[n-1];
    ll temp=0;
    for(int i=0;i<n;i++){
        temp+=2*a[i];
        if(temp>ans){
            ans = temp;
            break;
        }
        temp-=a[i];
    }
    
    cout<<ans<<endl;
    }
    return 0;
}