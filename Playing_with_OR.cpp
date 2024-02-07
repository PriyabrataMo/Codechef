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
        ll n , k;
        cin>>n>>k;
        vi v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int oddc = 0;
        int i = 0;
        int j = k-1;
        for(int i=0;i<=j;i++){
            if(v[i]%2){
                oddc++;
            }
        }
        int ans= 0;
        while(j<n){
            if(oddc>0){
                ans++;
            }
            if(v[i]%2==1){
                oddc--;
            }
            if(j<n&&(v[j+1]%2==1)){
                oddc++;
            }
            i++;
            j++;
        }
        cout<<ans<<endl;


    }
    return 0;
}