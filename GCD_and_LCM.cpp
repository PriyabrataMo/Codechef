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
        ll x , y , k;
        cin>>x>>y>>k;
        if(x==y){
            cout<<x+y<<endl;
            continue;
        }
        ll gc = -1;
        ll lc = -1;
        while(k--){
            if(x==y){
                break;
            }
            gc = __gcd(x,y);
            x>y?x=gc:y=gc;
            lc = lcm(x,y);
            x>y?x=lc:y=lc; 

        }
        cout<<x+y<<endl;
        

    }
    return 0;
}