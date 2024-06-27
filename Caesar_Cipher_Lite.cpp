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
        string a,b;
        cin>>a>>b;
        vi ans;
        for(int i=0;i<n;i++){
            int temp = 0;
            while(a[i]!=b[i]){
                temp++;
                a[i] ='A'+char((int(a[i])-'A'+3)%26);
            }
            ans.pb(temp);
            char c = 'A'+char((int(a[i])-'A'+3)%26);
        }
        print(ans);
    }
    return 0;
}