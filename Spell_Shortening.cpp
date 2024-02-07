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
        int n;
        cin>>n;
        string a = "";
        cin>>a;
        bool flag = false;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                a.erase(i,1);
                flag = true;
                break;
            }
        }
        if(flag==false){
            a.erase(n-1,1);
        }
        
        cout<<a<<endl;
    }
    return 0;
}