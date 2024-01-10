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
        string s1 , s2;
        cin>>s1>>s2;
        ll c = 0;
        ll ci = 0;
        ll s = 0;
        for(ll i=0;i<n;i++){
            if(s1[i]==s2[i]){
                s++;
            }
            else if(s1[i]=='R'&&s2[i]=='S'){
                c++;
            }
            
            else if(s1[i]=='S'&&s2[i]=='P'){
                c++;
            }
            
            else if(s1[i]=='P'&&s2[i]=='R'){
                c++;
            }
            else{
                ci++;
            }
            

        }
        cout<<c<<ci<<endl;
        ll rw = (n/2);
        if(rw%2) rw++;
        ll t = (c+ci)/2;
        t+=1;

       
        cout<<t-c<<endl;
        

    }
    return 0;
}