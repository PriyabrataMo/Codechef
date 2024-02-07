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
        ll c,f;
        cin>>c>>f;
        
        if(c%f==0){
            cout<<0<<endl;
        }
        else if(c<f){
            int ans2 = 0;
            while(f>0){
                c++;
                f--;
                ans2++;
                if(c%f==0){
                    cout<<ans2<<endl;
                    break;
                }
                
                
            }
            
        }
        else{
            int ans1 = 0;
            int che = c;
            int fre = f;
            while(f>0){
                c++;
                f--;
                ans1++;
                if(c%f==0){
                    break;
                }
                
                
            }
            c=che;
            f=fre;
            int ans2 = 0;
            while(c>0){
                c--;
                f++;
                ans2++;
                if(c%f==0){
                    
                    break;
                }
                
                
            }
            cout<<min(ans2,ans1)<<endl;
            
        }
       
        
    }
    return 0;
}