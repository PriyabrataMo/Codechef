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
    cin >> n;
    vi a(n);
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    unordered_map<ll,ll> mpp;
    ll ans = 0;
    for(int i=0;i<n;i++){
        ll x; cin >> x;
        if(x == 2){
            ans += mpp[6];
        }
        else if(x == 4){
            ans += mpp[4];
        }
        mpp[x]++;
    }
    cout<<ans<<endl;
    /*
    vi suf(n);
    suf[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i] = min(suf[i+1],a[i]);
    }
    ll ans = 0;
    for(int i=n-2;i>=0;i--){
        if(a[i]>suf[i]){
            //cout<<a[i]<<" "<<suf[i]<<endl;
            if((a[i]+suf[i])*2==(a[i]*suf[i])+(a[i]-suf[i])){
                
                ans++;
            }
        }
        }cout<<ans<<endl;

    }*/
    /*map<ll,ll> mpp;
    ll ans=0;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
        if(i>0){
            ll req = (3*a[i])/(a[i]-1);

            if(a[i]<req&&mpp.find(req)!=mpp.end()){
                ans++;
            }
        }

    }
    cout<<ans<<endl;
    }
    */
    

    }
    return 0;
}
