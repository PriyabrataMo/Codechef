#include <iostream>
using namespace std;
#include<string.h>
int main() {
	int t;
	cin>>t;
	while(t--){
	   int m1=0,m2=0;
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b){
	        m1 += a;
	        if(b>c){
	            m1+=b;
	            
	        }
	        else{
	            m1+=c;
	        }
	    }
	    else{
	        m1 += b;
	        if(a>c){
	            m1+=a;
	            
	        }
	        else{
	            m1+=c;
	        }
	    }
	    cin>>a>>b>>c;
	    if(a>b){
	        m2 += a;
	        if(b>c){
	            m2+=b;
	            
	        }
	        else{
	            m2+=c;
	        }
	    }
	    else{
	        m2 += b;
	        if(a>c){
	            m2+=a;
	            
	        }
	        else{
	            m2+=c;
	        }
	    }
	  
	   if(m1>m2){
	       cout<<"Alice"<<endl;
	   }
	   else if(m1<m2){
	       cout<<"Bob"<<endl;
	   }
	   else{
	       cout<<"Tie"<<endl;
	   }
	    
	}
	return 0;
}
