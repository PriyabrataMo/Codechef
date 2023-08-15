#include <bits/stdc++.h>
using namespace std;
#include<string.h>
#include<vector>
#include<iterator>
void findCommon(int arr1[], int arr2[], int n1,
				int n2)
{
	vector<int> v(n1 + n2);
    vector<int>::iterator it, st;
  
    it = set_intersection(arr1, arr1 + n1,
                          arr2, arr2 + n2,
                          v.begin());
  
    
    for (st = v.begin(); st != it; ++st)
        cout << *st;
    cout << '\n';
}

int main() {
    
        int a,b,c;
        cin>>a>>b>>c;
        int arr1[a],arr2[b],arr3[c];
        for(int i=0;i<a;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<b;i++){
            cin>>arr2[i];
        }
        for(int i=0;i<c;i++){
            cin>>arr3[i];
        }
        
        findCommon(arr1,arr2,a,b);
        findCommon(arr3,arr2,c,b);
        findCommon(arr3,arr1,a,c);
    	
    	
    
	return 0;
}
