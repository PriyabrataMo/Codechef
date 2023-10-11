#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>


using namespace std;

int main() {
	int t;
	cin>>t;
	while(t){
        int n;
        cin>>n;
	    string s;
        cin>>s;
        int c=1;
        int ind = 2;
        int m = 1000000007;
        while(ind<n){
            int o , x , a;
            int ci = 0;
            o = (int(s[ind-1])-48)|(int(s[ind-2])-48);
            x = (int(s[ind-1])-48)^(int(s[ind-2])-48);
            a = (int(s[ind-1])-48)&(int(s[ind-2])-48);
            if(int(s[ind])-48==o){
                ci++;
            }
            if(int(s[ind])-48==x){
                ci++;
            }
            if(int(s[ind])-48==a){
                ci++;
            }
            if(ci==0){
                c=0;
                break;
            }
            c*=ci%m;
            c = c%m;
            ind+=2;
        }
        cout<<c<<endl;
	    t--;
	}
	return 0;
}
