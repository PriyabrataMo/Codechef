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
        ll n;
	    cin>>n;
	    ll one = 0, two = 0;
	    for(int i=0;i<n;i++){
	        ll x;
	        cin>>x;
	        if(x==1){
	            one++;
	        }
	        else two++;
	        
	    }
	    if(two%8==0){
	        yesprint();
	    }
        else noprint();
	   
    }
    return 0;
}