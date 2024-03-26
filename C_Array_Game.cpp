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
    ll n, k;
  cin >> n >> k;
  vector<ll> v(n);

  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }

  if (k >= 3)
  {
    cout << 0 << endl;
    continue;
    
  }
  sort(v.begin(),v.end());
    ll mini = v[0];
    for(int i=0;i<n;i++){
        mini = min(mini,v[i]);
    }
  if(k==1){
    
    cout<<mini<<endl;
    continue;
  }
    if(k==2){
     
        sort(v.begin(),v.end());
        ll d = mini;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                ll temp = v[i]-v[j];
                ll p = lower_bound(v.begin(),v.end(),temp)-v.begin();
                if(p<n){
                    d = min(d , v[p]-temp);
                }
                if(p>0){
                    d = min(d , temp-v[p-1]);
                }

            }
        }

        cout<<d<<endl;

    }
    }
    return 0;
}