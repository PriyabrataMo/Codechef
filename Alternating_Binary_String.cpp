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
    string s;
    cin>>s;
    ll ans= 0;
    ll str = 1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            str++;
        }
        else {
            ans+=str-1;
            str = 1;
        }
    }
    if(str>1){
        ans+=str-1;
    }
    cout<<ans<<endl;
    }
    return 0;
}