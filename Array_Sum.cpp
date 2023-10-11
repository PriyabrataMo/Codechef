#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>
#include<iterator>
#define ll long long int
#define pb push_back
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,k;
        cin>>n>>k;
        
        vector<int> v(n);
        for(int i=0;i<n;i++)
  {
      if(i%2==0)
       v[i]+=1;
      else
       v[i]+=2;
      if(i%2)
       k-=2;
      else
       k-=1;
  }
   if(k<0)
  {
      cout<<-1<<endl;
      continue;
  }

    ll x=k/(2*n);
  k=k%(2*n);
  ll i=0;
  while(k>0)
  {
      if(k==1)
      {
          cout<<-1<<endl;
          
      }
      v[i]+=2;
      k-=2;
      
      i++;
      i=(i%n);
  }

for(int i=0;i<n;i++)
{
    v[i]+=(2*x);
    if(v[i]>100000)
    {
       cout<<-1<<endl;
       continue;
      
    }
}
for(auto it:v)
 cout<<it<<" ";
 

cout<<endl; 

}


	return 0;
}
