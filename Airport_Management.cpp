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
	    
        vector<long long int> a;
        vector<long long int> b;
        vector< pair <long long int,long long int> > vect;
	    for(long long int i=0;i<n;i++){
            long long int x;
            cin>>x;
            a.push_back(x);
              
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(x);
              
        }
        map<long long int,long long int> mpp;
        for(int i=0;i<n;i++){
            mpp[a[i]]++;
            mpp[b[i]]++;
            vect.push_back( make_pair(a[i],b[i]) );
              
        }

        long long int ans = 1;
        for(int i=1;i<vect.size();i++){
            if(mpp[vect[i].first]>1||mpp[vect[i].second]>1){
                ans++;
            }
        }
        cout<<ans<<endl;



	}
	return 0;
}
