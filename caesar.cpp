#include <iostream>
using namespace std;
#include<string.h>
int main() {
	
        cout<<"bd"-"zb"<<endl;
        cout<<int('c')^int('x');
        cout<<'d'-'b'<<endl;
        cout<<'d'-24<<endl;
        char result;
        char c = 'b';
        char t;

        if(int(c) + 24>122){
           t  = char(int(c) + 24-26);
        }
        char r = char(int(c) + 24);
        cout<<r<<t<<endl;
	return 0;
}
