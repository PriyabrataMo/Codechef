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
    long double n , m;
    cin>>n>>m;
    if(m>3000){
        for(ll i=1;i<=n;i++){
            cout<<i+i<<" ";
        }
        cout<<endl;
    }

    else{
       
        for(ll i=1;i<=n;i++){
        m+=m;
        cout<<m<<" ";
        
        }
        cout<<endl;
    }
    
    }
    return 0;
}