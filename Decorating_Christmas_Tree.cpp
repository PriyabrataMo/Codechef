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
        ll x , y , n;
        cin>>n>>x>>y;
        if(x>=2*n) printyes();
        else if(x<n) printno();
        else if((y>=3*n)&&(x>=n)) printyes();
        else{
            ll c = y/3;
            ll nx = x-c;
            ll nn = n-c;
            if((nx>=2*nn)&&(nx>0)&&(nn>=0)) printyes();
            else printno();
        }
    }
    return 0;
}