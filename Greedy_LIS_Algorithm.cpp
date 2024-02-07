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
        vi vec(n);
        for(int i=0;i<n;i++){
            vec[i] = i+1;
        }
        if(x==0){
            print(vec);
        }
        else if(x==n){
            cout<<-1<<endl;
        }
        else if(x>n-2){
            cout<<-1<<endl;
        }
        else{
            int ind = n-2-x;
            vec[ind] = n;
            for(int i=ind+1;i<n;i++){
                vec[i] = i;
            }
            print(vec);
        }

    }
    return 0;
}