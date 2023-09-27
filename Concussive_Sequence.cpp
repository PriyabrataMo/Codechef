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
	while(t--){
        vector<int> a;
        int n;
        cin>>n;
        map<int,int> mpp;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mpp[x]++;
            a.push_back(x);
        }
        if(n==3&&mpp.size()==1){
            cout<<-1<<endl;
            continue;
            
        }
        if(n%2>mpp.size()){
            cout<<-1<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        int l=0;
        int r = n-1;
        
        while(l<r){
            cout<<a[l]<<" ";
            l++;
            cout<<a[r]<<" ";
            r--;
        }
        if(l==r){
            cout<<a[r];
        }
	    cout<<endl;
	    
	}
	return 0;
}
