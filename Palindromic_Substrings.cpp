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
        string s;
        cin>>s;
        // if(n>=3){
        //     if(n%2==0){
        //         cout<<"Alice"<<endl;
        //     }
        //     else{
        //         cout<<"Bob"<<endl;
        //     }
        // }
        // else if(n==2){
        //     if(s=="00"||s=="11"){
        //         cout<<"Alice"<<endl;
        //     }
        //     else{
        //         cout<<"Bob"<<endl;  
        //     }
        // }
        // else if(n==1){
        //     cout<<"Bob"<<endl;
        // }
        ll one  = 0;
        ll zero = 0;
        for(auto it:s){
            if(it=='1'){
                one++;
            }
            else{
                zero++;
            }
        }

        ll c = abs(one-zero);
        if(n==1){
            cout<<"Bob"<<endl;
        }
        else if(n==2){
            if(s=="00"||s=="11"){
                cout<<"Alice"<<endl;
            }
            else{
                cout<<"Bob"<<endl;  
            }
        }
        else if(n%2==0){
            if(c>=2){
                cout<<"Alice"<<endl;
            }
            else{
                cout<<"Bob"<<endl;
            }
        }
        else{
            if(c>=2){
                cout<<"Bob"<<endl;
            }
            else{
                cout<<"Alice"<<endl;
            }
        }
        // if(one==zero||n==1){
        //     cout<<"BOB"<<endl;
        // }
        // else cout<<"ALICE"<<endl;
        
    }
    return 0;
}