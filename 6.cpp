#include <iostream>
using namespace std;
int highestPowerof2(int n)
{
   int p = (int)log2(n);
   return (int)pow(2, p);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
    	cin>>a>>b>>c;
    	int m1,m2;
    	
    	m1 = max(a,b);
    	m2 = max(m1,c);
    	if(m1==b&&m2==c){
    	    
    	}
    	
    	
    	
    }
	return 0;
}
