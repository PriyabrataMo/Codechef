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
        ll p , s;
        cin>>p>>s;
        vi v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        sort(v.begin(),v.end(),greater<ll>());
        while(v.size()>2&&p>0&&s>0){
            ll n1 , n2;
            n1 = v[1];
            n2 = v[v.size()-1];
            if(abs(n1)>abs(n2)){
                v[1]+=v[0];
                v.
            }
            else{

            }
        }
    }
    return 0;
}