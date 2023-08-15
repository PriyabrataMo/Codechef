#include <iostream>
using namespace std;
#include<string.h>

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y,s0=0,s1=0;
    	cin>>n>>x>>y;
        string s;
        cin>>s;
        int tax=0;
        for(int i = 0;i<n;i++){
            if(s[i]=='0'){
                s0 +=1;
            }
            else{
                s1 += 1;
                
            }
            
        }
        int m = min(x,y);
        if(s[0]=='1'){
            if(s0==0){
                cout<<"0"<<endl;
            }
            else{
                cout<<m<<endl;
            }
            }
        else{
            if(s1==0){
                cout<<"0"<<endl;
            }
            else{
                cout<<m<<endl;
            }            
            }
            
        
    	
    	
    	
    }
	return 0;
}
