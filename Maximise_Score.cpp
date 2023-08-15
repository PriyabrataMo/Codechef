#include <iostream>
using namespace std;
#include<string.h>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
        int min = INT16_MAX;
        int prev = 0;
        for(int i =0;i<n;i++){
            int x ;
            cin>>x;
            arr[i]=x;
            if(arr[i-1]){
                int k = abs(arr[i]-arr[i-1]);
                if(min>=(k)){
                    min = k;

                }
            }
        }
        cout<<min<<endl;
	}
	return 0;
}
