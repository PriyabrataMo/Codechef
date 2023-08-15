#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
    	cin>>n>>a>>b;
    	int even = n/2;
        int odd = n - even;
        int dura = (odd*a)+(even*b);
        cout<<dura<<endl;
    	
    	
    }
	return 0;
}
