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
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    ll ans = 0;
    ll cnt = 0;
    ll x = -1;
    for(int i=0;i<n;i++){
        if(s[i]==c) {
            cnt++;
            
            x = i+1;
        }
    }
    
    if(cnt==n){
        cout<<0<<endl;
        continue;
    }
    //cout<<x<<endl;
    if(x*2>n){
        cout<<1<<endl;
        cout<<x<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<n-1<<" "<<n<<endl;
    }
    // ll ans = 0;
    // ll one = 0;
    // if(s[0]!=c) one++;
    // ll two = 0, three = 0;
    // for(int i=1;i<n;i++){
    //     if(i%2==1){
    //         if(s[i]!=c) two++;
    //     }
    //     else{
    //         if(s[i]!=c) three++;
    //     }
    // }
    // if(one==0&&two==0&&three==0){
    //     cout<<0<<endl;
    //     continue;
    // }
    // vector<ll> a;

    // if(one==1) {ans++;a.pb(1);}
    // if(two==0&&three==0){
    //     cout<<1<<endl;
    //     cout<<1<<endl;
    //     continue;
    }

    return 0;
}