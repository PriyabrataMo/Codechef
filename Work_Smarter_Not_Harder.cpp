#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>
#include <cmath>



using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    double d,v1,v2;
	    cin>>d>>v1>>v2;
	    double t = ceil(d/v1);
	    double h = ceil(d/v2);
       
        if(t<=h){
            cout<<-1<<endl;
        }
        else{
            if((t-h)==1){
                cout<<0<<endl;
            }
            else{
                cout<<t-h-1<<endl;
            }
        }

	    
	    
	}
	return 0;
}
