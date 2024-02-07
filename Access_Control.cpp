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
        ll n,x;
        cin>>n>>x;
        string str;
        cin>>str;
        bool flag = false;
        ll swi=0;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                swi=x;
            }
            else{
                swi--;
            }
            if(swi<0) {
                flag =true;
                break;
            }
        }
        if(flag) printno();
        else printyes();
    }
    return 0;
}