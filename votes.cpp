#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include<vector>
#include<string.h>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    vector <int> a;
        vector <int> dq;
	    vector<int>::iterator it;
        for(int i = 1;i<=n;i++){
            int x;
            cin>>x;
            if(i==x){
                a.push_back(0);
                dq.push_back(i);
            }
            else{
                a.push_back(x);
            }
            
            
        }
        int mc=0;
        vector <int> c;
        for(int i = 1;i<=n;i++){
            int count=0;
            for(int j = 0;j<n;j++){
                if(a[j]==i){
                    count++;
                }
            }
            it = find(dq.begin(),dq.end(), i);
            if(it != dq.end()){
            
            }
            else{
                if(count>=s){
                mc++;
                continue;
            }
            }
            
        }
        cout<<mc<<endl;
	}
	return 0;
}
