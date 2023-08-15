#include <bits/stdc++.h>
using namespace std;
#include<string.h>
#include<vector>
void func(int ind , int n,vector<int> &a){
    if(ind > n){
        return;
    }
    int s = a[ind]+a[ind-1]+a[ind-2];
    if(s%3==0){
        func(ind+1,n,a);
    }
    else{
        int rem = s%3;
        a[ind]+=rem;
        func(ind+1,n,a);
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
	    vector<int> a;
        int s = 0;
        for(int i=0;i<n;i++){
            int x ;
            cin>>x;
            s+=x;
            a.push_back(x);
        }
        func(2,n,a);
        int s2 = 0;
        for(int i=0;i<n;i++){
            
            s2+=a[i];
           
        }

        
        cout<<s2-s<<endl;
	}
	return 0;
}
