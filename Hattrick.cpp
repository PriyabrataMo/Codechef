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
        int str=0;
        bool flag = false;
        for(int i=0;i<6;i++){
            char ch;
            cin>>ch;
            if(ch=='W'){
                str++;
            }
            else{
                str=0;
            }
            if(str>=3) flag = true;
        }
        if(flag) printyes();
        else printno();
    }
    return 0;
}