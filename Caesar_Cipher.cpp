#include <iostream>
using namespace std;
#include<string.h>
#include<vector>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	   
        cin>>n;
        string a,b,c;
        cin>>a;
        cin>>b;cin>>c;
        
        int k = (b[0]-a[0]);

        int f = 26-k;
        int g = k-26;
        string d = "";
        for(int i=0;i<n;i++){
            char e = c[i];
            char t;
            if(k>0){
                int req = int(e)+k;
            if(req>122){
                int re = req - 122;
            t = char(96+re);
            d.push_back(t);
            }
            else if(req<97){
                int re = req - 122;
            t = char(96+re);
            d.push_back(t);
            }
            else{
            t = char(int(e) + k);
            d.push_back(t);
            }
            }
            else{
                
            }
            
        

        }
        cout<<d<<endl;
	}
	return 0;
}
