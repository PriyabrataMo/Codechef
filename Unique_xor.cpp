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

int main() {
	int t;
	cin>>t;
	while(t){
	    ll n,k;
        string s;
        cin>>n>>k;
        cin>>s;
        ll ans = 0;
        ll zero=0, one = 0;
        vi vec(k) ;
        for(ll i=0;i<n;i++){
            ll m= (i+1)%k;
            vec[m]^atoi(s[i]);
            if(s[i]=='0'){
                
                zero++;
            }
            else{
                
                one++;
            }
        }
        
        if(one>=zero){
            for(ll i=0;i<k;i++){
                ll req = vec[i][0];
                
                if(req==0){
                    continue;
                }
                else{
                    ans+= req;
                }
            }
        }
        else if(zero>one){
            for(ll i=0;i<k;i++){
                ll req = vec[i][1];
                
                if(req==0){
                    continue;
                }
                else if(req%2==1){
                    ans+= req/2;
                }
            }
        }
        cout<<ans<<endl;

	    t--;
	}
	return 0;
}
