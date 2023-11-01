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
        ll n , s;
        cin>>n;
        vi a(n);
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            a[i]=x;
        }
        if(n==1){
            cout<<a[0]<<endl;
            continue;
        }
        vi pre(n,0),suf(n,0);
        pre[0] = a[0];
        for(int i=1;i<n;i++){
            pre[i] = max(pre[i-1],a[i]);
        }
        suf[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i] = max(suf[i+1],a[i]);
        }
        ll l=0,r=n-1;
        ll ans = 0;
        while(l<r){
            ll le = pre[l];
            ll re = suf[r];
            ll maxi = max(le,re);
            ll mini = min(le,re);
            ll req = abs(l-r)*mini+maxi;
            ans = max(req , ans);
            if(le<re){
                while(l<n&& pre[l]==le){
                l++;
                }
            }
            else{
                while(r>=0 && suf[r]==re){
                r--;
                }
            }
            
            
        }
        cout<<ans<<endl;



    }
    return 0;
}