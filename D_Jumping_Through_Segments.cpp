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
    ll maxi=-1e18 , mini = 1e18;
    vvi a (n,vi(2));
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
        maxi = max(maxi,a[i][0]);
        mini = min(mini,a[i][1]);
    }
    ll l = mini;
    ll r = maxi;
    ll ans = maxi;
    while(l<=r){
        ll mid = l+(r-l)/2;
        ll flag = 0;
        ll r1 = 0;
        ll l1 = 0;
        for(int i=0;i<n;i++){
            r1 = min(r1+mid,a[i][1]);
            l1 = max(l1-mid,a[i][1]);
            if(r1<l1){
                flag = 0;
                break;
            }

        }
        if(flag){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}