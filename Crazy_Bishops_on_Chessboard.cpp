#include <iostream>
using namespace std;
#include<string.h>


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n+1][n+1];
        for(int i = 0;i<=n;i++){
            for(int j = 0;j<=n;j++){
                a[i][j]=0;
            }
        }
	    for(int i = 1;i<=2;i++){
            for(int j = 1;j<=n;j++){
                a[i][j]=0;
            }
        }
        for(int j = 1;j<=n;j++){
            if(j%2==0){
                a[2][j]=1;
            }else{
                a[1][j]=1;
            }
        }
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
        int count = 0;
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                if(i==j){
                    for(int k = i;k<=n;k++){
                        for(int l = j;l>0;l++){
                            if(a[k][l]==1){
                                count++;
                            }
                        }
                        cout<<count<<endl;
                    }
                }
            }
            cout<<endl;
        }


	}
	return 0;
}
