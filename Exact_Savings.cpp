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
        ll n,x,z;
        cin>>n>>x>>z;
        vi a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(z%x==0) cout<<z/x<<endl;
        else{
            ll mini = (z/x)+1;
            ll p = mini*x;
            
        }
    }
    return 0;
}