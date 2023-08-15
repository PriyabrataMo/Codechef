#include <bits/stdc++.h>
#include<vector>
using namespace std;
#include<string.h>
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
vector<int> printDivisors(int n)
{
    vector<int> a;
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                a.push_back(i);
  
            else // Otherwise print both
                a.push_back(i);
                a.push_back(n/i);
        }

    }
    sort(a.begin(),a.end());
    return a;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
        map<int , int>mpp;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            mpp[x]++;
        }
        int co = 0;
        for(int i=1;i<=n;i++){
            if(mpp.find(i)==mpp.end()){
                if(isPrime(i)){
                    co = co+i;
                }
                else{
                    vector<int> a = printDivisors(i);
                    for(int j = 0;j<a.size();j++){
                        if(mpp.find(i)==mpp.end()){
                            co = co+i;
                            break;
                        }
                    }
                }
            }
        }

	    
	   
	  
	    cout<<co<<endl;
	    
	}
	return 0;
}
