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
void SieveOfEratosthenes(int n , bool prime[])
{
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
int main() {
    int t;
    cin>>t;
    bool prime[1000001];
    SieveOfEratosthenes(1000001, prime);
    while(t--){
        ll n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
        }
        else if(n==2){
            cout<<2<<" "<<2<<endl;
        }
        else{
            int ind = 2;

        }
        
    }
    return 0;
}