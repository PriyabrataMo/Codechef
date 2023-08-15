#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        map<char, int> m;
        for (int i = 0; i < s.length(); i++) {
            m[s[i]]++;
        }
        map<char, int>::iterator it;
        bool flag = false;
        for (it = m.begin(); it != m.end(); it++) {
            if (it->second >1) {
                flag = true;
                
            }
        }
        if(flag){
             cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
