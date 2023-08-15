
#include <bits/stdc++.h>
using namespace std;
#include<string.h>

int main() {
    int t;
    cin>>t;
    while(t--){
        int mean , median;
        cin>>mean>>median;
        
        if(mean==median){
            cout<<mean<<" "<<mean<<" "<<mean<<endl;
        }
        else{
            int sum = mean*3;
            int num = sum-median;
            cout<<"0"<<" "<<median<<" "<<num<<endl;
        }
        

    	
    	
    }
	return 0;
}
