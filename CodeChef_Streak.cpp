#include <iostream>
using namespace std;
#include<string.h>
#include<vector>
int streak(vector<int>a,int n){
    int st = 0;
    int max=0;
    for(int i = 0;i<n;i++){
        if(a[i]==0){
            if(st>max){
                max=st;
            }
            st = 0;
        }
        else{
            st++;
        }
    }
    
    if(st==n){
        max = st;
    }
    else if(st>max){
        max = st;
    }
    cout<<max<<" "<<st<<endl;
    return max;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector <int> a;
        vector <int> b;

        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        int as,bs;
        as = streak(a,n);
        bs = streak(b,n);
        if(as>bs){
            cout<<"om"<<endl;
        }
        else if(bs>as){
            cout<<"andy"<<endl;
        }
        else{
            cout<<"draw"<<endl;
        }
	}
	return 0;
}
