#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include<vector>
#include<string.h>
void print(std::vector <int> const &a) {
  

   for(int i=0; i < a.size(); i++)
   cout << a.at(i) << ' ';
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector <int> a;
        vector <int> b;
        int scorea = 0;
	    vector<int>::iterator it;
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
            if(i>0){
                if(a[i-1]!=a[i]){
                    scorea++;
                }
            }
            
        }
        cout<<scorea<<endl;
        
        if(a[0]==1){
           
            b.push_back(0);
        }
        else{
            b.push_back(1);
        }
        if(scorea%2!=0){
        int i;
        int k;
        for(i = 1;i<=scorea;i++){

            b.push_back(!b[i-1]);
            
            
        }
        k = b.back();
        while(i<n){
            
            b.push_back(k);
            i++;
        }
        }
        else{
        int i,k;
        for(i = 1;i<=scorea;i++){
            b.push_back(!b[i-1]);
            
        }
        k = b.back();
        while(i<n){
            b.push_back(k);
            i++;
        }

        }
        print(b);
        cout<<endl;
        
        
	}
	return 0;
}
