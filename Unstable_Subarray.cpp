#include <iostream>
using namespace std;
#include<string.h>
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector <int> a;
        for(int i = 0;i<n;i++){
            int x;

            cin>>x;
            a.push_back(x);
        }
        int count = 0;
        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                if(a[i]==a[j]){

                }
                else{
                    count++;
                }
            }
        }
        cout<<count<<endl;
	}
	return 0;
}
