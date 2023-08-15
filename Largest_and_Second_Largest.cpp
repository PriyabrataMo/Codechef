#include <iostream>
using namespace std;
#include<string.h>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a;
        int m1=0,m2=0;
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            if((x>m1)){
                if(x>m2){
                    m1=m2;
                    m2=x;
                    
                }
                else{
                    if(m2==x){

                    }
                    else{
                        m1=x;
                    }
                    
                }
            }

            
        }
        
        cout<<m1+m2<<endl;
        

	}
	return 0;
}
