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
        ll n , k;
        
        cin>>n>>k;
        
        ll s=0;
        for(ll i=0;i<n;i++){
            int x;
            cin>>x;
            s+=x;
        }
        if(k==0){
            if(s%n==0){
            printyes();
            continue;
        }
        else{
            printno();
            continue;
        }
        }
        if(s<n){
            printno();
        }
        else{
            printyes();
        }

    }
    return 0;
}