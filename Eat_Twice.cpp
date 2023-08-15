#include <iostream>
using namespace std;
#include<string.h>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
        int d1=0,d2=0,v1=0,v2=0;
        for(int i = 0;i<n;i++){
            int x , y;
            cin>>x>>y;
            if((x = d1)||(x  = d2)){
                if(x==d1){
                    v1 = y;
                    d1 = x;
                }
                else{
                    v2 = y;
                    d2 = x;
                }
                continue;
            }
            if((y>v1)||(y>v2)){
                if(y>v1&&(v2!=0)){
                    if(d2==x){
                        int m;
                        m = max(v2,y);
                        v2 = m;  
                    }
                    else{
                        v1 = y;
                        d1 = x;
                    }
                    }
                else{
                    v2 = y;
                    d2 = x;
                    
                }
            }
        }
        
        cout<<v1+v2<<endl;
	    
	}
	return 0;
}
