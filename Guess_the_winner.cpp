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
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
}
bool isPrime(ll n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
ll func(ll n){
    ll l = 3;
    ll r = n;
    ll ans = -1;
    while(l<r){
        ll m = l+((r-l)/2);
        if(isPrime(m)&&(n%m==0)){
            ans = max(ans,m);
            l = r+1;
        }

        else{
            r = l-1;
        }


    }
    return ans;

    
}
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n<=2){
            cout<<"Bob"<<endl;
        }
        else if(isPowerOfTwo(n)){
            cout<<"Bob"<<endl;
        }
        else if(isPrime(n)&&(n%2==1)){
            cout<<"Alice"<<endl;
        }
        else{
            ll f = func(n);
            ll r = n/f;
            if(r%2){
                cout<<"Alice"<<endl;
            }else{
                cout<<"Bob"<<endl;

                
            }
            
        }
    }
    return 0;
}