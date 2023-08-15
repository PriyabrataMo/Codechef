#include <cmath>
#include <iostream>
using namespace std;
#include<string.h>
int main() {
	int t;
	cin>>t;
	while(t--){
	    double n,p,r;
	    cin>>n>>p>>r;
	    double re = r/30;
	    n = n+re;
	    cout<<ceil(n/p)<<endl;
	}
	return 0;
}
