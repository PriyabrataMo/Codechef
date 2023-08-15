
#include <bits/stdc++.h>
using namespace std;
#include<string.h>

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        int count = 0;
        arr[0]=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            arr[i]=x;
            
            
        }
        
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            int y = arr[i]-arr[i-1];
            if(x<=y){
                count++;
            }
           
        }

        cout<<count<<endl;
        
    	
    }
	return 0;
}
