#include <iostream> 
#include <algorithm>

#include <stack> 
#include<string.h>
#include <array> 

#include <vector>

using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int len;
    cin>>len;
    string s;
    stack<char> st;
    cin>>s;
    string:: iterator it;
    int counter = 1;
    char pr='\0';

    for(it = s.begin(); it != s.end();it++){
        if(*it==pr){
            counter = counter+1;
            
        }
        
        
        pr = *it;
       

        st.push(*it);
        if(counter==3){
            st.pop();
            st.pop();
            char lastpop = st.top();
            st.pop();
            st.push(lastpop);
            counter = 1;

        }
    }
	
 vector<char> arr; 
    
	while (!st.empty()) {
		
        arr.push_back(st.top());
		st.pop();
	}
    int n = arr.size();
    reverse(arr.begin(), arr.end());
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    }
    return 0;
}
