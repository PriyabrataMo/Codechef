
#include <bits/stdc++.h>
using namespace std;
#include<string.h>

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int count = 0;
        int arr[10] = {6,2,5,5,4,5,6,3,7,6};
        int res=n+s;
        int rem ;
        while(res>0){
            rem = res%10;
            count +=arr[rem];
            res = res/10;
        }
        cout<<count<<endl;
        
        

        
    	
    }
	return 0;
}
