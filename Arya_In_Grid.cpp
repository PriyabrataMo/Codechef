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
        ll n , m , x , y , j;
        cin>>n>>m>>x>>y>>j;
        ll l = x-1;
        ll ri = n-x;
        ll t = y-1;
        ll b = m-y;
        ll p=0 , q=0 ,r=0, s=0;
        if(j<=l){
            p = l/j;
        }
        if(j<=ri){
            q = ri/j;
        }
        if(j<=t){
            r = t/j;
        }
        if(j<=b){
            s = b/j;
        }
        ll req = r+s;
        ll res = (p*req)+(q*req)+p+q+r+s+1;
        cout<<res<<endl;;
    }
    return 0;
}