#include <iostream>

using namespace std;
#include<vector>
#include<string.h>

#include <bits/stdc++.h>
#define SIZE 26
void print(std::vector <int> const &a) {
  

   for(int i=0; i < a.size(); i++)
   cout << a.at(i) << ' ';
}
void printCharWithFreq(string str,vector <int> &k)
{
    
    // size of the string 'str'
    int n = str.size();
 
    // 'freq[]' implemented as hash table
    int freq[SIZE];
 
    // initialize all elements of freq[] to 0
    memset(freq, 0, sizeof(freq));
 
    // accumulate frequency of each character in 'str'
    for (int i = 0; i < n; i++)
        freq[str[i] - 'a']++;
 
    // traverse 'str' from left to right
    for (int i = 0; i < n; i++) {
 
        if (freq[str[i] - 'a'] != 0) {
            int a = freq[str[i] - 'a'];
            k.push_back(a);
 
            
            freq[str[i] - 'a'] = 0;
        }
    }
    
}
 



int main()
{
	int t;
	cin>>t;
	while(t--){
	    
        string s;
	    cin>>s;
        vector <int> k;
        printCharWithFreq(s,k);
        
        print(k);
        cout<<endl;

        
	}
	return 0;
}
