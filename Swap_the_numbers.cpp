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
	    for(int i=0;i<n-s;i++){
	        int right=i+s;
	        int sn = a[i];
            int sm = i;
	        while(right<n){
	            if(a[right]<a[i]){
                    if(a[right]<sn){
                        sn = a[right];
                        sm = right;
                    }
                    
                }

                right++;
	        }
	        swap(a[i],a[sm]);
	    }
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
        cout<<endl;
	    
	}
	return 0;
}
