#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>


using namespace std;
void func(int *b,int c){
    b[0]=9;
    cout<<c<<endl;
    c=0;
    cout<<c<<endl;
}
int main() {
	int t;
	int arr[1]={2};
    int d = 5;
    cout<<arr[0]<<" "<<d<<endl;
    func(arr,d);
    cout<<arr[0]<<" "<<d<<endl;
	return 0;
}
