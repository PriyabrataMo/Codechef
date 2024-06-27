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
    // ll n;
    // cin>>n;
    // vi a(n,0);
    // for(ll i=0;i<n;i++){
    //     cin>>a[i];
    // };
    // ll ans = 0;
    // ll x = -1;
    // bool flag = true;
    // for(int i=1;i<n;i++){
    //     if(a[i-1]<=a[i+1]){
    //         x = a[i+1]-a[i];
    //         break;
    //     }
    //     else {
            
    //     }
    // }
    // if(!flag) {
    //     noprint();
    //     continue;
    // }
    // int ind = 3;
    // for(int i=3;i<n-1;i++){
    //     if(a[i-1]<=a[i+1]){
    //         if(x<=a[i+1]-a[i]){
    //         }
    //     }
    //     else{
    //         flag = false;
    //         break;
    //     }
    // }
    // if(flag){
    //     yesprint();
    // }
    // else{
    //     noprint();
    // }
    // ll n;
    // cin>>n;
    // vi a(n);
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // if(is_sorted(a.begin() , a.end())){
    //     yesprint();
    //     //print(a);
    //     continue;
    // }
    // ll x = -1;
    // bool flag = true;
    // vi b(n);
    // int ind;
    // for(int i=1;i<n;i++){
    //     //cout<<x<<endl;
    //     if((a[i-1]>a[i])&&x==-1){
    //         //cout<<a[i]<<endl;
    //         //cout<<x<<endl;
    //         x = a[i-1]-a[i];
    //         ind = i;
    //         break;
            
    //     }
    
    // }
    // //cout<<x<<endl;
    // for( ind = 1; ind<n;ind++){
    //     //print(a);
    //     bool ok = false;
    //     if(a[ind-1]>a[ind]){
    //         //cout<<a[ind]<<endl;
    //         a[ind]+=x;
    //         ok = true;
            
            
    //     }
    //     if(ind<n-1&&a[ind]>a[ind+1]){
    //         flag == false;
    //         cout<<a[ind]<<endl;
            
    //     }
    //     if(ok) ind++;

        
    // }
    // //print(a);
    // if(is_sorted(a.begin() , a.end())){
    //     yesprint();
    //     //print(a);
    // }

    // else{
    //     noprint();
    // }
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        if (is_sorted(a.begin(),a.end())) {
            cout << "YES" << endl;
            continue;
        }

        vi v;
        ll maxi = a[0];
        ll inc = 0;
        for (int i = 1; i < n; ++i) {
            maxi = max(a[i], maxi);
            if (a[i] < maxi) {
                v.push_back(i);
                inc = max(inc, maxi - a[i]);
            }
        }
        
        bool f = true;
        for (int i = 1; i < v.size(); ++i) {
            if (v[i] == v[i - 1] + 1) {
                f = false;
                break;
            }
        }
        
        for (int it : v) {
            a[it] += inc;
        }
        
        vi b = a;
        sort(b.begin(), b.end());
        if (a == b && f) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}