#include <algorithm> 
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std; 
#include<array>
#include<vector>
void func(vector<int> &arr,vector<vector<int> > &ans ,vector<int> &r, int ind,int n){
    if(ind>=n){
        ans.push_back(r);
        return;
    }
    
    r.push_back(arr[ind]);
    func(arr,ans,r,ind+1,n);
    r.pop_back();
    func(arr,ans,r,ind+1,n);

    
}
int main() 
{ 
    vector<int> arr; 
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    vector<int> r;
    
    vector<vector<int> > ans;
    func(arr,ans,r,0,3);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}