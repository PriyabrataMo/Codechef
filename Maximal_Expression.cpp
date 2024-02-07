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
        ll l = 0;
        ll r = n;
        ll ma = INT_MIN;
        ll ans = 0;
        if(k<=2){
            cout<<0<<endl;
            continue;
        }
        if(n>=k){
            ans= k/2;
        }
        else{
            
            
                ans = n/2;
            
        }

        
       
        cout<<ans<<endl;


    }
    return 0;
}