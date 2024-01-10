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
        int n,m;
        cin>>n>>m;
        vi a(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int bmax=INT_MIN;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            bmax = max(x,bmax);
        }
        
        int ind = n-bmax;
        vi b(bmax);
        for(int i=0;i<bmax;i++){
            b[i]=a[ind+i];
        }
        sort(b.begin(),b.end());
        for(int i=0;i<bmax;i++){
            a[ind+i]=b[i];
        }
        print(a);
    }
    return 0;
}