#include <iostream>
using namespace std;
#include<string.h>
#include <stack>
#include<vector>

int main() {
	
	
	    int n;
	    cin>>n;
	    stack<string> st;
        
        for(int i = 0;i<n;i++){
            string x;
            cin>>x;
            cout<<x<<endl;
            st.push(x);
        }
      
	
	return 0;
}
