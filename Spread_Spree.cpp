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
        ll n,m;
        cin>>n>>m;
        int mod = 998244353;
        ll ma = max(n,m);
        ll mi = min(n,m);
        if(ma>=2*mi){
            if(ma%2==1){
                ll midma = (ma/2)%mod+1;
                ll rs =(( (mi%mod)*((mi%mod)+1))/2)%mod;
                ll ans = (rs*(midma%mod))%mod;
                cout<<ans<<endl;
            }
            else if(ma%2==0){
                ll midm2 , midm1;
                midm2 = (ma/2)%mod;
                midm1 = (ma/2)%mod+1;
                ll rs =(( (mi%mod)*((mi%mod)+1))/2)%mod;
                ll ans =(rs*(midm1%mod)+rs*(midm2%mod))%mod;
                cout<<ans<<endl;
            }
        }
        else{
            if(ma%2==0&&mi%2==0){
                ll ans = 0;
                for(ll i=ma/2;i<=ma/2+1;i++){
                    for(ll j=mi/2;j<=mi/2+1;j++){
                        ans+=((i%mod)*(j%mod))%mod;
                    }
                }
                cout<<ans<<endl;
            }
            else if(ma%2==1&&mi%2==1){
                ll midmi = (mi/2)%mod+1;
                ll midma = (ma/2)%mod+1;
                ll ans = ((midmi)%mod*(midma)%mod)%mod;
                cout<<ans<<endl;
            }
            else if(ma%2==0&&mi%2==1){
                ll midma = (mi/2)%mod;
                ll ans = 0;
                ll minma = (ma/2+1)%mod;
                for(int i=midma;i<=midma+1;i++){
                    ans+=((i%mod)*(minma%mod))%mod;
                }
                cout<<ans<<endl;
            }
            else{
               
                ll midma = (mi/2)%mod;
                ll ans = 0;
                ll minma = (ma/2+1)%mod;
                for(int i=midma;i<=midma+1;i++){
                    ans+=((i%mod)*(minma%mod))%mod;
                }
                cout<<ans<<endl;
            
            }
        }
    }
    return 0;
}