#include <bits/stdc++.h>
using namespace std;
#include<string.h>
#include<vector>
void RemoveOdd(std::vector<int> & data, int s) {
    int rp = 0, wp = 0, sz = data.size();
    for(; rp<sz; ++rp) {
        if(data[rp]>=s) {
            // if the element is a keeper, write it in the "write pointer" position 
            data[wp] = data[rp];
            
            // increment so that next good element won't overwrite this
            wp++;
        } 
    }
    // shrink to include only the good elements 
    data.resize(wp);
}

int check(vector<int>a,int s){
    
    sort(a.begin(), a.end());
    for(int i = 0;i<a.size();i++){
        
        for(int j=i+1;j<a.size();j++){
            
            if((a[j]&a[i])==s){
                return 1;
            }
        }
    
        
    }
    return 0;
}
    
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>s>>n;
	    vector <int> a;
        

        for(int i = 0;i<s;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        
        RemoveOdd(a,n);
        
        if(check(a,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
        
	}
	return 0;
}
