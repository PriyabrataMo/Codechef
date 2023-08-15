#include <iostream>
using namespace std;
#include<string.h>
void func(int x,int y,int z,int c,vector<int> &v){
    
    if(c>2){
        v.push_back(-1);
        return;
        
    }
    if((y*z)%x==0){
        v.push_back(y*z);
        v.push_back(x);
        return;
      
        
    }
    c = c+1;
    func(y,z,x,c,v);
  
    
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    vector <int> vect;
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    func(x,y,z,0,vect);
        for(int i=0;i<vect.size();i++){
            cout<<vect[i]<<" ";
        }
        cout<<endl;
	    
	}
	return 0;
}
