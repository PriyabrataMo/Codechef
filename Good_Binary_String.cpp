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
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll prob = 0;
    int flag = 0;
    vi ans;
    for(ll i=0;i<=n-2;i++){
        //cout<<"dknfk"<<i<<endl;
        if(s[i]!=s[i+1]){
            prob++;
            if(flag==1){
                if(s[i]=='1'){
                    ans.pb(i+1);
                }
                else ans.pb(i+2);
                flag = 0;
            }
            else{
                if(s[i]=='0'){
                    ans.pb(i+1);
                }
                else ans.pb(i+2);
                flag = 1;
            }

        }
        i++;
    }
    if(prob==0){
        cout<<0<<endl;
    }
    else{
        cout<<prob<<endl;
        print(ans);
    }
    
    }
    return 0;
}