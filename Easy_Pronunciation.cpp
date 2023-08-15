
#include <bits/stdc++.h>
using namespace std;
#include<string.h>
#include<stack>

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        
        cin>>str;
        bool flag = true;
        int count = 0;
        for(int i=0;i<=n;i++){
            
            if(count==4){
                flag = false;
                break;
            }
            char c = str[i];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                count= 0;
            }
            else{
                count++;
            }
        }
        if(flag){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
        
    	
    }
	return 0;
}
