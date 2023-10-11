#include <algorithm> 
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std; 
#include<array>
#include<vector>
void func(vector<int> &arr,vector<vector<int> > &ans ,vector<int> &r, int ind,int n,int s,int target){
    if(ind==n){
        if(s==target){
            ans.push_back(r);
        }
        return;
    }
    
    r.push_back(arr[ind]);
    s+=arr[ind];
    func(arr,ans,r,ind+1,n,s,target);
    r.pop_back();
    s-=arr[ind];
    func(arr,ans,r,ind+1,n,s,target);

    
}
int main() 
{ 
    vector<int> arr; 
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(1);
    vector<int> r;
    
    vector<vector<int> > ans;
    func(arr,ans,r,0,3,0,2);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}