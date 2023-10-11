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
	    int n;
        cin>>n;
        int s = 0;
        int mi = INT_MAX;
        for(int i=0;i<n;i++){
            int x ;
            cin>>x;
            s+=x;
            mi = min(x,mi);
        }
        cout<<s-mi<<endl;
	    t--;
	}
	return 0;
}
