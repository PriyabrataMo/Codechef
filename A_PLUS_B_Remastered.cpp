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
        vi a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end() , greater<ll>());
        vi c(n);
        c[0] = a[0]+b[0];
        bool flag = false;
        for(int i=1;i<n;i++){
            c[i] = a[i]+b[i];
            if(c[i]!=c[0]) flag = true;
        }
        if(flag) cout<<-1<<endl;
        else{
            print(a);
            print(b);
        }
        
    }
    return 0;
}