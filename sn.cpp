#include <bits/stdc++.h>
using namespace std;
#include<string.h>
#include<vector>
int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    
        vector<int> a;
        vector<int> b;
        vector< pair <int,int> > vect;
	    for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
              
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(x);
              
        }
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[a[i]]++;
            mpp[b[i]]++;
            vect.push_back( make_pair(a[i],b[i]) );
              
        }
        sort(vect.begin(), vect.end());
       
        
        int l = 0;
        int r = 1;
        int ans = 1;
        for(int i=1;i<vect.size();i++){
            if(mpp[vect[i].first]>1||mpp[vect[i].second]>1){
                ans++;
            }
        }
        cout<<ans<<endl;



	}
	return 0;
}
