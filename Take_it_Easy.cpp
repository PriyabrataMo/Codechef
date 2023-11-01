#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>
#define ll long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
using namespace std;

int main() {
    i;
        bool flag = true;
        for(int i=0;i<n;i++){
            cin>>v[i];
            s+=v[i];

            if(flag==true&&i>0&&v[i]!=v[i-1]){
                flag = false;
            }
            
        }
        
        if(s%n==0){
            bool flag2= true;
            int r = s/n;
            for(int i=0;i<n;i++){
                if((r-v[i])%2!=0){
                    flag2 = false;
                    break;

                }
            }
            if(flag2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
       
     
    }
    return 0;
}

