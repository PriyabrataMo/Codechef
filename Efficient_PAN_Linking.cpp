#include <iostream>
#include<string.h>
using namespace std;
#include<string.h>
int main() {
	int t;
	cin>>t;
	while(t--){
        string n;
	    cin>>n;
        
        int l = n.length();
        if(l<2){
            string r = n.substr(l-1, 1);
            
            int x = stoi(r);
            cout<<x<<endl;
        }
        else{
            string r = n.substr(l-1, 1);
            
            string q = n.substr(l-2, 1);
            int x = stoi(r);
            int z = stoi(q);
            if(z%2==0){
                cout<<x<<endl;
            }
            else{
                cout<<x+10<<endl;
            }


        }
        
        
	  
	    
	}
	return 0;
}
