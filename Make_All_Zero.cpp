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
        ll n;
        cin>>n;
        vi a(n);
        ll ma = -1 , mi = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ma = max(ma,a[i]);
            mi = min(mi , a[i]);
        }
        if(mi==ma) {
            cout<<1<<endl;
        }
        else{
            ll ans = mi;
            for(int i=0;i<n;i++){
                a[i] = a[i]-mi;
            }
            ll ind = -1;
            while(a[0]!=0){
                vi maxi(n,0);
                maxi[0] = a[0];
                for(int i=1;i<n;i++){
                    maxi[i] = min(a[i] , maxi[i-1]);
                    if(a[i]==0){
                        ind = i;
                        break;
                    }
                }
                if(maxi[ind-1]>ind-1){
                    for(int i=0;i<ind;i++){
                        a[i] = 0;
                        ans++;
                    }
                    
                    break;
                }
                for(int i=0;i<ind;i++){
                    a[i]--;
                }
                ans++;

            }
            for(int i=0;i<n;i++){
                if(a[i]!=0){
                    ans++;
                }
            }
            cout<<ans<<endl;
            
        }

    }
    return 0;
}