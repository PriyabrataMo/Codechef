
#include <bits/stdc++.h>
using namespace std;
#include<string.h>

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int count = 0;

        for(int i = 0;i<n;i++){
            cin>>arr[i];
            if(arr[i-1]&&arr[i-2]){
                if((i>0)&&(arr[i-1]!=arr[i])){
                    if((i>1)&&arr[i-2]!=arr[i-1]){
                        count = count+1;
                        
                    }
                    else{
                        count = count+2;

                    }
                }
            }
        }
        cout<<count<<endl;
    	
    }
	return 0;
}
