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
        int n;
        cin>>n;
        vector<vector<int>> a(n+1);
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            a[u].push_back(v);
        }
        int ans = 0;
        for(auto it:a){
            if(it.size()<2){
                ans+=2-it.size();
            }
        }
        cout<<ans*4<<endl;


    }
    return 0;
}