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
        int one=0 , zero=0;
        int ans = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(one==0&&x==0){
                zero++;
            }
            else if(zero==0&&x==1){
                one++;
            }
            else if(x==0){
                one--;
                ans++;
            }
            else if(x==1){
                zero--;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}