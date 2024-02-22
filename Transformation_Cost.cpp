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
        ll n;
        cin>>n;
        
        int ans = 0;
        string bin="";
        while(n>0){
            if((n&1)==0){
                bin+='0';
            }
            else{
                bin+='1';
            }
            n = n>>1;
        }
        
        int len = bin.size();
        int i = 0;
        while(bin[i]=='0'){
            i++;
        }
        int one = -1;
        for(;i<len;i++){
            if(bin[i]=='1'&&one==-1){
                one = i;
            }
            else if(bin[i]=='0'){
                ans+=pow(2,one);
                one = i;
            }
        }
        
        
        cout<<ans<<endl;
    }
    return 0;
}