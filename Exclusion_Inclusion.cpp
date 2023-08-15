#include <bits/stdc++.h>
using namespace std;
#include<string.h>
#include<vector>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
	    vector<int> a;
        int s = 0;
        for(int i=0;i<n;i++){
            int x ;
            cin>>x;
            s+=x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            cout<<s<<" ";
            s = s-a[i];
        }
        cout<<endl;
	}
	return 0;
}
