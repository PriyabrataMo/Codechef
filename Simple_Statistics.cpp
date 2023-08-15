#include <bits/stdc++.h>
using namespace std;
#include<string.h>

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
    	cin>>a>>b;
        int arr[a];

    	for(int i=0;i<a;i++){
            int k;
            cin>>k;
            arr[i]=k;
        }
        sort(arr , arr+a);
        
        int lb,ub;
        double sum=0,count = 0;
        lb = b-1;
        ub = a-b;
        for(int i=0;i<a;i++){
            if((i>lb)&&(i<ub)){
                
                sum = sum+arr[i];
                count++;
            
            }
            

        }
        
        long long avg = sum/count;
        cout<<fixed<<setprecision(6)<<avg<<endl;
    	
    	
    	
    }
	return 0;
}
