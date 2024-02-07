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
bool isPrime(ll n)
{
    // Corner case
    if (n <= 1) return false;
 
    // Check from 2 to n-1
    for (ll i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        ll hp;
        cin>>hp;
        ll p=1;
        ll ans = 0;
        
        while(hp>0){
            
            if(isPrime(hp)){
                ans++;
                hp=0;
                break;
            }
            else{
                hp-=p;
                p *=2;
                ans++;
            }
            

        }
        if(hp==0){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}