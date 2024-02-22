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
        vi a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vi b;
        b = a;
        
        sort(b.begin(),b.end());
        if(n==2) {
            if(b==a) printyes();
            else printno();
        }
        else if(n==3){
            if(a==b){
                printyes();
            }
            else if(a[1]==b[1]){
                if(a[0]==b[2]&&a[2]==b[0]){
                    printyes();
                }
                else{
                    printno();
                }    
            }
            else{
                printno();
            }
        }
        else{
            printyes();
        }
        

    }
    return 0;
}