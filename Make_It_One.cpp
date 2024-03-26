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
    ll r,l;
    cin>>l>>r;
    int ro ,lo;
    ro = r%2;
    lo = l%2;
    if(__gcd(l,r)==1) 
    { 
        for(int i=l+1;i<=r;i++) 
        { 
            cout<<i<<" "; 
        } 
        cout<<l; 
        cout<<endl;
    } 
    else if((ro==1&&lo==0)||(ro==0&&lo==1)){
        for(int i=l;i<=r;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
        cout<<endl;
    }
    else if(ro==1&&lo==1){
        cout<<l+1<<" "<<l+2<<" "<<l<<" "; 
            for(int i=l+3;i<=r;i+=2) 
            { 
                cout<<i+1<<" "<<i<<" "; 
            } 
            cout<<endl;
    }
    
    else{
         cout<<-1<<endl;
    }

    }
    return 0;
}