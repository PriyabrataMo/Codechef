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
void func(int num,int &n,set<int> &s,int sel,int &sum){
    if(n==sum){
        cout<<n<<endl;
        return;
    }
    if(n<sum){
        return;
    }
    int nu = num+1;
    sum+=num;
    func(nu,n,s,sel+1,sum);
    sum-=num;
    func(nu,n,s,sel,sum);
    }
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans;
        ans= sqrtl(n);
        if(n%2==1){
            ans++;
        }
        cout<<ans/2<<endl;
       

    }
    return 0;
}