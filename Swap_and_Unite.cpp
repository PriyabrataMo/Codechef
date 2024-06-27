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
void yesprint(){
    cout<<"YES"<<endl;
}
void noprint(){
    cout<<"NO"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int n = s.length();
    int ans = INT_MAX;
    for(char ch = 'a';ch<='z';ch++){
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==ch) count++;
        }
        if(count==0) continue;
        
        int l=0;
        int r=count-1;
        int extrach=0;
        for(int i=l;i<=r;i++)
        {
            if(s[i]!=ch) extrach++;
            
        }
        int res=extrach;
        while(r<=n-1)
        {
            res=min(res,extrach);
            if(s[l]!=ch) extrach--;
            
            l++;
            r++;
            if(r<=n-1 && s[r]!=ch)
            {
                extrach++;
            }
            
        }
        ans=min(ans,res);
    }
    cout<<ans<<endl;
   
    }
    return 0;
}

           