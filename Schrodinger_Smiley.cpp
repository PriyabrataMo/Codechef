#include <iostream>
using namespace std;
#include<string.h>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
	    string s;
        cin>>s;
	    int count = 0;
        int i=0;
	    while(i<n){
            if(s[i]==':'){
                i++;
                bool flag = false;
                while(s[i]==')'&&i<n){
                    i++;
                    flag = true;
                }
                if(s[i]==':'&&flag){
                    count++;
                }
            }
            else{
                i++;
            }

            
        }
	    cout<<count<<endl;
	    
	}
	return 0;
}
