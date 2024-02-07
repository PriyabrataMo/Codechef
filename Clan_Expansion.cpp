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

bool check(vi &v , ll n){
    for(int i=0;i<v.size();i++){
        if(v[i]!=n){
            return false;
        }
    }
    return true;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vi v(n);
        ll uni = 0;
        
        for(int i=0;i<n;i++){
            
            cin>>v[i];
        }
        set<ll> s(v.begin(), v.end());
        if(s.size()==1||n==1){
            cout<<v[0]<<" "<<0<<"\n";
            continue;
        }
        if(s.size()==n){
            cout<<n/2<<endl;
        }
        ll ati = INT_MAX;
        ll aind = INT_MAX;
        for(ll i :s){
            ll l= -1;
            ll r = 0;
            ll ti = INT_MIN;
            ll ind = i;
            while(r<n){
                if(l==-1&&v[r]==i){
                    ti = max(ti,r);
                    l=r;

                }
                else if(v[r]==i){
                    ti = max(ti,(r-l)/2);
                    l=r;
                }
                r++;
            }
            if(r>=n&&l!=n-1){
                ti = max(ti,r-l-1);
            }
            if(ti<ati){
                ati = ti;
                aind = ind;
            }
            if(ati==ti){
                aind = min(aind,ind);
            }


        }
        cout<<aind<<" "<<ati<<"\n";



    }
    return 0;
}