#include <bits/stdc++.h>
using namespace std;
#include<string.h>
#include<vector>

int main() {
	int n ;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(i!=a[i-1]){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
	return 0;
}
