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
	    
	    if(n==1){
	        cout<<8<<endl;
	    }
	    if(n==2||n==3){
	        int x = stoi(s);
	        if(x%8==0){
	            cout<<x<<endl;
	        }
	        else{
	            int q = x/8;
	            int r = x%8;
	            int a1 = q*8;
	            int a2 = (q+1)*8;
	            if(a1/10==x/10){
	                cout<<a1<<endl;
	            }
	            else{
	                cout<<a2<<endl;
	            }
	        }
	    }
	    else if(n>3){
            
	        ll x = stoi(s.substr(n-3,3));
	        int q = x/8;
	        int r = x%8;
	        int a1 = q*8;
	        int a2 = (q+1)*8;
	        int rep = 0;
            
            if(a1/10==x/10){
                rep = a1;
            }
            else{
                rep = a2;
            }
            string s1 = to_string(rep);
            int m = s1.length();
            if(m==1){
                s[n-3]='0';
                s[n-2]='0';
                s[n-1]=s1[0];
            }
            if(m==2){
                s[n-3]='0';
                s[n-2]=s1[0];
                s[n-1]=s1[1];
            }
            if(m==3){
                s[n-3]=s1[0];
                s[n-2]=s1[1];
                s[n-1]=s1[2];
            }
            
            cout<<s<<endl;
	        
	        
	    }
	    
	    
	    t--;
	}
	return 0;
}
