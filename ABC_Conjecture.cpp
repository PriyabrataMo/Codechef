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
    string a , b;
    cin>>a>>b;
    // ll ac = 0 , bc = 0 , cc = 0;
    // bool flag = true;
    // for(int i=0;i<n;i++){
    //     //cout<<i<<endl;
    //     if(a[i]=='b'&&b[i]!='b') {
    //         flag = false;
    //         break;
    //     }
        
    //     else if(a[i]=='a'&&b[i]=='c') ac++;
    //     else if(a[i]=='b'&&b[i]=='b') bc = ac;
    //     else if(a[i]=='c'&&b[i]=='a') {
    //         if(ac==0){
    //             flag = false;
    //             break;
    //         }
    //         if(bc==0){
    //             flag = false;
    //             break;
    //         }
    //         ac--;
    //         bc--;
    //     }
    // }
    // cout<<bc<<endl;
    // if(ac!=0)noprint();
    // else if(flag) yesprint();
    // else noprint();
    queue<int> q;
    ll ind = 0;
    bool flag = true;
    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            if(a[i]=='b'){
                ind = i;
            }
        }
        else if(a[i]=='a'&&b[i]=='c'){
            q.push(i);
        }
        else if(a[i]=='c'&&b[i]=='a'){
            if(q.size()!=0&&q.front()<ind){
                q.pop();
            }
            else {
                noprint();
                flag = false;
                break;
            }
        } 
        else {
            noprint();
            flag = false;
            break;
        }
        
    }
    if(flag&&q.size()>0){
            noprint();
        }
        else if(flag) yesprint();
    }
    return 0;
}