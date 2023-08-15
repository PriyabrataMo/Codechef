#include <iostream>
using namespace std;
#include<string.h>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[4]={0,0,0,0};
        for(int i = 0;i<n;i++){
            string x;
            cin>>x;
            if(x=="A"){
                arr[0] +=1;
            }
            else if(x=="B"){
                arr[1] +=1;
            }
            else if(x=="AB"){
                arr[2] +=1;
            }
            else{
                arr[3] +=1;
            }

        }
        int m = max(arr[1],arr[0]);
        int s = arr[3]+arr[2]+m;
        cout<<s<<endl;

	    
	}
	return 0;
}
