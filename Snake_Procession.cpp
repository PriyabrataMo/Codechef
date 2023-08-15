#include <iostream>
using namespace std;
#include<string.h>
#include <stack>


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string st;
	    cin>>st;
	    stack<char> s;
        for(int i = 0;i<n;i++){
            if(st[i]=='H'){
                if(s.empty()){
                    s.push('H');
                }
                else if(s.top()=='H'){
                    
                    
                    break;
                }
                
                
            }
            if(st[i]=='T'){
                if(s.empty()){
                    
                    s.push('T');
                    break;
                }
                else{
                    s.pop();
                }
                
                
            }

        }
        
            if(s.empty()){
            cout<<"Valid"<<endl;
        }
        else{
            cout<<"Invalid"<<endl;
        }
        
        
	    
	}
	return 0;
}
