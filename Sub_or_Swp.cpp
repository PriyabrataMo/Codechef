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
        ll x,y;
	    cin>>x>>y;
	    while(x>0){
	        if(x>y){
	            swap(x,y);
	        }
	        else{
	            int temp = x;
	            x = y-x;
	            y = temp;
	        }
	    }
	    cout<<y<<endl;
	    
    }
    return 0;
}