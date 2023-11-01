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
	    int n;
	    cin>>n;
	    int ans = 0;
	    int k = 2;
	    while(k<=n){
	        ans++;
            
	        k=k+7;
	    }
	    cout<<ans<<endl;
	    t--;
	}
	return 0;
}
