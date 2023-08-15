#include <bits/stdc++.h>
using namespace std;
#include<string.h>

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,count=0;
    	cin>>a;
    	string s;
        cin>>s;
       
        for(int i=0;i<a;i++){
            if((s[i]=='1')&&(s[i+1]=='0')){
                count++;
            }
        }
    	cout<<count<<endl;
    	
    	
    	
    }
	return 0;
}
