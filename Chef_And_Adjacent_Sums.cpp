
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
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            arr[i]=x;
        }
        
        
        int max = *max_element(arr, arr + n);
        int coun = count(arr, arr + n, max);
        if(coun>=2){
            if(n==2){
            cout<<"NO"<<endl;
        }
        else if(n%2==0){
            int d = n/2;
            if(coun>d){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            int d = (n/2)+1;
            if(coun>d){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
            
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
        

        
    	
    }
	return 0;
}
