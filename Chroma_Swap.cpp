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
        vi a(n) , ca(n);
        map<int,vi> mpp;
        vi cb(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>ca[i];
        }
        for(int i=0;i<n;i++){
            cin>>cb[i];
        }
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            mpp[x].pb(cb[i]);
        }
        int le = 0;
        int re = 1;
        while(re<n){
            
        }
        print(a);
        if(le==0&&re==n){
            printyes();
            continue;
        }

        
        
    }
    return 0;
}