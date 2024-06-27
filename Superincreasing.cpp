#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>
#define ll long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t){
	    double n , k , x;
	    cin>>n>>k>>x;
	    // k = k-1;

	    double sum = 0;
        double num = 1;
        for(int i=1;i<k;i++){

            sum+=num;
            num = sum+1;
        }
        //cout<<sum<<endl;
	    if(x>=sum){
	        cout<<"Yes"<<endl;
	    }
	    else cout<<"No"<<endl;
	    t--;
	}
	return 0;
}
