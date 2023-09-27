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
	    string s;
        int n;
        cin>>n;
        cin>>s;
        int ind = -1;
        
        for(int i=0;i<n-2;i++){
            if(s[i]=='1'){
                ind = i+1;
                break;
            }
        }
        while(ind!=-1&&ind<n){
            s[ind]='0';
            ind++;
        }
        cout<<s<<endl;
	    t--;
	}
	return 0;
}
