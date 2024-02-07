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
        
        bool flag = false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0&&a[i]!=a[i-1]){
                flag = true;
            }
        }
        if(flag==false){
            printno();
            continue;
        }
        if(n==4){
            if(a[0]+a[1]!=a[2]+a[3]){
                printyes();
            }
            else{
                printno();
            }
            continue;
        }
        flag = false;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                for(int k=j+1;k<n-1;k++){
                    for(int l=k+1;l<n;l++){
                        if(a[i]+a[j]!=a[k]+a[l]){
                            flag = true;
                            break;
                        }
                    }
                    if(flag=true){
                        break;
                    }
                }
                if(flag=true){
                        break;
                }
            }
            if(flag=true){
                break;
            }
        }
        if(flag){
            printyes();
        }
        else{
            printno();
        }


    }
    return 0;
}