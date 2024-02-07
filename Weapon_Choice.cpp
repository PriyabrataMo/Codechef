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
        int hp,x,y1,y2,k;
        cin>>hp>>x>>y1>>y2>>k;
        int mx = hp/x;
        if(hp%x) mx++;
        int my = 0;
        if(y1*k==hp) my+=k;
        else if(y1*k<hp){
            my+=k;
            hp-=k*y1;
            my+=hp/y2;    
            if(hp%y2&&hp>0) my++;
        }
        else{
            my+=hp/y1;
            if(hp%y1&&hp>0) my++;
        }
        
        cout<<min(mx,my)<<endl;
    }
    return 0;
}