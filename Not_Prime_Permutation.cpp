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
        vi a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n<=2) cout<<-1<<endl;
        else {
            vi b(n);
            for(int i=0;i<n;i++){
                if(a[i]==1) b[i] = 3;
                else if(a[i]==2) b[i] = 2;
                else if(a[i]==3) b[i] = 1;
                else b[i] = a[i];
                
            }
            print(b);
        }
    }
    return 0;
}