
#include <bits/stdc++.h>
using namespace std;
#include<string.h>
#include <algorithm>


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,x,y;
        cin>>s;
        x.append("1");
        for(int i = 1;i<n;i++){
            string k;
            if(s[i-1]=='0'&&x[i-1]=='0'){
                k ="0";
            }
            else if (s[i-1]=='0'&&x[i-1]=='1')
            {
                k = "1";
            }
            else if (s[i-1]=='1'&&x[i-1]=='0')
            {
                k = "1";
            }else if (s[i-1]=='1'&&x[i-1]=='1')
            {
                k = "0";
            }
            
            x.append(k);
        }
        y.append("0");
        for(int i = 1;i<n;i++){
            string k;
            if(s[i-1]=='0'&&y[i-1]=='0'){
                k ="0";
            }
            else if (s[i-1]=='0'&&y[i-1]=='1')
            {
                k = "1";
            }
            else if (s[i-1]=='1'&&y[i-1]=='0')
            {
                k = "1";
            }else if (s[i-1]=='1'&&y[i-1]=='1')
            {
                k = "0";
            }
            
            y.append(k);
        }
        char ch = '1';
        
        int countx = std::count(x.begin(), x.end(), ch);
        int county = std::count(y.begin(), y.end(), ch);
        cout<<max(countx,county)<<endl;
    	
    }
	return 0;
}
