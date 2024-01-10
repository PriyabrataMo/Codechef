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
void print(vector<ll> &a){
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
        vi v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

        }
        sort(v.begin(),v.end());
        vi ans(n);
        int l = 0;
        int r = n-1;
        bool flag = false;
        int ind = 0;
        while(l<r){
            if((v[l]+v[r])%2){
                flag = true;
                break;
            }
            int x = (v[l]+v[r])/2;
            ans[ind]=x;
            int y = v[r]-x;
            ans[ind+(n/2)]=y;
            ind++;
            l++;
            r--;
        }
        if(flag){
            cout<<-1<<endl;
            continue;
        }
        print(ans);

    }
    return 0;
}