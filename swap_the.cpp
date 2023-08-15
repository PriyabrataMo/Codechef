#include <bits/stdc++.h>
using namespace std;
#include<string.h>
#include<vector>

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    
	    vector<int> a;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        a.push_back(x);
	    }
	    for(int i=0;i<n;i++){
	        int r = i+s;
            while(a[r-1]>a[r]||(r<n-1)){
                r++;
            }
            swap(a[r-1],a[r]);
            sort(a.begin(),a.begin()+r);

	    }
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
        cout<<endl;
	    
	}
	return 0;
}
