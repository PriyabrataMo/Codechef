
#include <bits/stdc++.h>
using namespace std;
#include<string.h>

int main() {
    int t;
    cin>>t;
    while(t--){
        int s,n;
        cin>>s;
        n = 2*s;
        int count = 0;
        int arr[n];
        bool flag = true;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }
        
        for(int i=0;i<n-1;i++){
            count = 0;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
                if(count>=2){
                cout<<"No"<<endl;
                flag = false;
                break;   
            
            
            }
        }
        
        if(flag){
            cout<<"Yes"<<endl;
        }
        
        

        
    	
    }
	return 0;
}
