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
	    int x;
	    cin>>x;
	    float co = 0.2*x;

	    int ans = ceil(100/co);
	    cout<<ans<<endl;
	    t--;
	}
	return 0;
}
