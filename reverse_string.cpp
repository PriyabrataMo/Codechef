#include <bits/stdc++.h>
#include<vector>
using namespace std;
#include<string.h>


int main() {
	int t;
	cin>>t;
	while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int mid = n/2-1;
        int l=0;

        while(l<mid){
            swap(s[l],s[mid]);
            l++;
            mid--;
        }
        cout<<s<<endl;
    
	
    }
    return 0;
}
