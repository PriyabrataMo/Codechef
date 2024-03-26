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
        ll n,k;
        cin>>n>>k;
        vi a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
	    ll maxans = 0;
	    maxans=a[0]+a[1];
	    for(int i=2;i<n;i++){
	        maxans+=2*a[i];
	    }
        ll minans = 0;
        minans = a[n-1]+a[n-2];
        for(int i=0;i<n-2;i++){
            minans+=2*a[i];
        }
        for(int i=0;i<k;i++){
            int q;
            cin>>q;

            if(q<=minans||q>=maxans) cout<<-1<<endl;
            else{
                
            }


        }

    }
    return 0;
}