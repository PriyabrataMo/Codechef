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
    ll n , k;
    cin>>n>>k;
    if((n&1)==0){
        // cout<<k<<n<<endl;
        cout<<((k-1)%n)+1<<endl;
    }
    else
    {
    k = (k-1)+((k-1)/(n/2));

    //cout<<k<<endl;
    k = k%n;//remainder

    // ll clash = n/k;
    // ll loc = n/2;
    // if(n&1)loc++;
    // ll ans = 1;
    // ans = clash+rem;
    // if(ans>=loc) ans++;
    cout<<k+1<<endl;
    }
    
    
    }
    return 0;
}