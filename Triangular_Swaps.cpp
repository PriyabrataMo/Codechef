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
	    string s;
	    ll n;
	    cin>>n;
	    cin>>s;
	    set<string> st;
	    for(int i=0;i<n-3;i++){
            cout<<i<<endl;
	        string temp = s.substr(i,3);
	        string s2 = "";
	        s2+=temp[1];
	        s2+=temp[2];
	        s2+=temp[0];
	        
	        st.insert(s2);
	    }   
	    cout<<st.size()<<endl;
	    t--;
	}
	return 0;
}
