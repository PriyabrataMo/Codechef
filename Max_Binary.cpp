
#include <bits/stdc++.h>
using namespace std;
#include<string.h>

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        string str;
        cin>>str;
        if(str[0]!='1'){
            str[0]='1';
            int j = s-1;
            for(int i = n;i<n+j;i++){
                str.append("0");
            }
        }
        else{
            for(int i = n;i<n+s;i++){
                str.append("0");
            }
        }

        
        
        
        cout<<str<<endl;

        
    	
    }
	return 0;
}
