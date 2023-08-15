#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include<vector>
#include<string.h>
string xoring(string a, string b, int n){
string ans = "";
     
    // Loop to iterate over the
    // Binary Strings
    for (int i = 0; i < 10; i++)
    {
        // If the Character matches
        if (a[i] == b[i])
            ans += "0";
        else
            ans += "1";
    }
    return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector <string> a;
        for(int i = 0;i<n;i++){
            string s;
            cin>>s;
            a.push_back(s);
        }
        string result="0000000000";
        for(int i = 0;i<n;i++){
            cout<<a[i]<<endl;
            result = xoring(result,a[i],n);
        }
        cout << count(result.begin(), result.end(), '1');




	}
	return 0;
}
