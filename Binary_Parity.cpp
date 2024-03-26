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
        int n;
	    cin>>n;
	    int s = 0;
	    for(int i=0;i<31;i++){
	        int b = 1<<i;
	        int ad = n&b;
            if(ad)s+=1;
	        
	        
	    }
	    if(s%2) cout<<"ODD"<<endl;
	    else cout<<"EVEN"<<endl;
    }
    return 0;
}