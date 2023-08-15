#include <iostream>
using namespace std;
#include<string.h>
#include <stack>
#include<vector>
bool ispre(vector<string>a , string s){
    bool t = false;
    for (int i = 0;i<a.size();i++){
        if(a[i]==s){
            t = true;
            break;
        }
    }
    return t;

}
int main() {
	
	    int n;
	    cin>>n;
	    stack<string> st;
        
        for(int i = 0;i<n;i++){
            string x;
            cin>>x;
          
            st.push(x);
        }
        vector<string> a;
        string x;
        
        for(int i=0;i<n;i++){
            x = st.top();
            
            st.pop();
            if (a.empty())
            {
                int l = x.length();
                cout << x.substr(l-2,2);
                a.push_back(x);
            }
            else{
                if(ispre(a,x)){

                }
                else{
                    a.push_back(x);
                    int l = x.length();
                    cout << x.substr(l-2,2);

                }
            }
            
        }

	
	return 0;
}
