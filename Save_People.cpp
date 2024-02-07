#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>
#define ll long long int
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
ll func(vector<vector<ll> > &mat ,ll n , ll m, ll vi , ll vj , ll ii , ll ij , vector<vector<ll> > &vis){
    ll ans = 0;
    queue<pair<pair<ll , ll> , ll> >q;
    q.push(make_pair({make_pair{ii,ij},1));
    q.push(make_pair({{vi,vj},2)});
    int del[] = {-1,0,1,0};
    while(!q.empty()){
        ll r = q.front().first.first;
        ll c = q.front().first.second;
        ll v = q.front().second;
        if(v==2){
            ans++;
        }

        vis[r][c]=v;
        for(int i=0;i<=3;i++){
            ll ro = r+del[i];
            ll co = c+del[3-i];
            if(ro>=0&&ro<n&&co>=0&&co<m&&vis[ro][co]==0){
                   
                q.push({{ro,co},v});
            }
        }


    }
    return ans;

}
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n , m;
        cin>>n>>m;
        vector<vector<ll> >mat(n,vector<ll>(m,0));
        ll r , c;
        cin>>r>>c;
        ll ans = INT_MIN;
        mat[r-1][c-1]=1;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                vector<vector<ll> >vis(n,vector<ll>(m,0));
                
                if(mat[i][j]!=i){
                    ans = max(ans , func(mat, n ,m, i , j , r , c , vis));
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}