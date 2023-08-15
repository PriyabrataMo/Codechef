#include <bits/stdc++.h>
using namespace std;
#include<string.h>
#include <stack>
#include<vector>
bool ispre(vector<string>a , string s){
    bool t = false;
    for (int i = 0;i<a.size();i++){
        if(a[i]==s){
            
            t = true;  
        }
    }
    return t;

}
int main() {
	
	    int n;
	    cin>>n;
	    
        map<string, int> m1;         //creating map
        for(int i = n;i>0;i--){
            string x;
            cin>>x;
            
            m1.insert(x,i);
        }
        
    
    
        // prints the elements
        cout << "KEY\tELEMENT\n";
        for (auto itr = m1.begin(); itr != m1.end(); ++itr) {
            cout << itr->first
                << '\t' << itr->second << '\n';
        }
        
	
	return 0;
}
