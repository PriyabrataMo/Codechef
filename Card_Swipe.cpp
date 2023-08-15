#include <cmath>
#include <bits/stdc++.h>

#include <iostream>
using namespace std;
#include<string.h>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        vector<int> a;
        unordered_set<int> j;
        int m = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            int ma = 0;
            if(j.empty()){
                j.insert(x);
                ma++;
                continue;
            }
            if(j.find(x)==j.end()){
                j.insert(x);
                ma++;
            }
            else{
                ma = 1;
                j.erase(x);
            }
            m = max(m,ma);

        }
        cout<<m<<endl;
        
	}
	return 0;
}
