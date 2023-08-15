
#include <bits/stdc++.h>
using namespace std;
#include<string.h>
#include <algorithm>

#include <stack>
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        stack<char> stack;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='('){

            }
            if(isalpha(s[i])){
                cout<<s[i];
            }
            if(s[i]==')'){
                cout<<stack.top();
                stack.pop();
            }
            char o = s[i];	//Or some other character

            if (o == '%' || o == '/' || o == '*' || o == '+' || o == '-'|| o=='^') {

                stack.push(o);
                 }

    }
    cout<<endl;
    }
	return 0;
}
