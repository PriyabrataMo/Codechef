// C++ program to demonstrate functioning of substr()
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	// Take any string
	string s = "dog:cat";

	// Find position of ':' using find()
	int pos = s.find(":");
    cout<<pos<<endl;
	int k = s.length();
	if(pos>0){
                while(k>1){
                
                if(pos){
                    string sub = s.substr(0, pos);
                    cout<<s;
                    s = s.substr(pos + 2);
                }
                else{
                cout<<s<<endl;;
                    s = "";
                    
                }
                k = s.length();
            }
   
    
    }
    else{
        cout<<s;
    }
	return 0;
}
