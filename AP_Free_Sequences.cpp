#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include<vector>
#include<string.h>


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector <int> a;
        bool flag = true;

        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
            
        }
        for(int i = 0;i<n-2;i++){
            for(int f = i+1;f<n-1;f++){
                int s = a[i]-a[f];
                for(int j = i+2;j<n;j++){
                    
                    if(a[f]-a[j]==s){
                        flag = false;
                        
                    }
                    
                }
            }
        }
        
        
            
        if(flag){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
        
        
        
	}
	return 0;
}
