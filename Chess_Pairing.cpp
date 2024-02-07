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
	int t;
	cin>>t;
	while(t){
	    ll n , x;
	    cin>>n>>x;
	    ll players = 2*n;
	    if(x==0){
            cout<<0<<endl;
        }
	    else if(n==x){
	        cout<<0<<endl;
	    }

	    else if(players==x){
	        cout<<x<<endl;
	    }
	    else{
	        cout<<n%x<<endl;
	    }
	    t--;
	}
	return 0;
}
