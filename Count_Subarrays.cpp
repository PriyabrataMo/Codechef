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
    for(ll i=1;i<a.size();i++){
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
        vi p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        vi pre(n+1,0);
        pre[0] = 0;
        int s = 0;
        for(int i=1;i<=n;i++){
            s+=p[i-1];
            pre[i] = s;
        }
        vi count(n+1,0);
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
                int s = pre[j]-pre[i-1];
                if(s<=n){
                    count[s]++;
                }
                else{
                    break;
                }
            }
        }
        print(count);
    }
    return 0;
}