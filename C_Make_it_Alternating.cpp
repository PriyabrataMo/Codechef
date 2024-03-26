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
void solve(string s){
    int n = s.length();
    int ans = 0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            ans++;
        }
    }
    cout<<(ans+1)/2<<endl;
}
ll mod = 998244353;
ll factorial(ll n) 
{ 
    if (n == 0 || n == 1) 
        return 1; 
    return n * (factorial(n - 1)%mod); 
} 
int main() {
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    ll mod = 998244353;
    ll n = s.length();
    ll ans1 = 0;
    ll ans2 = 1;
    char last = s[0];
    ll streak = 1;
    ll k = s.length();
    for(ll i=1;i<n;i++){
        if(s[i]==last){
            streak++;
        }
        else{
            ans1+= streak-1;
            ans2 = (ans2*(factorial(streak)%mod)%mod)%mod;
            k--;
            last = s[i];
            streak = 1;
        }
    }
    
    if(streak>1){
        k--;
        ans1+= streak-1;
        ans2 = (ans2*(factorial(streak)%mod)%mod);
    }
    cout<<ans1<<endl;
    ll kfac = factorial(ans1);
    cout<<ans1<<" "<<ans2*kfac<<endl;



    }
    return 0;
}

