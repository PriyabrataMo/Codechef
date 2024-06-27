#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>
#define ll long long int
#define vi vector<ll>
#define vvi vector<vi>
#define pb push_back
using namespace std;
void print(vector<ll> a)
{
    for (ll i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void yesprint()
{
    cout << "YES" << endl;
}
void noprint()
{
    cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b(k, 0);
        bool flag = true;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int c = 0;
            int ind = -1;

            for (int j = 0; j < k; j++)
            {
                if (a[i][j] == '1')
                {
                    c++;
                    ind = j;
                }
            }
            if (c == 1)
            {
                s.insert(ind);
            }
        }
        // for (int i = 0; i < k; i++)
        // {
        //     cout << b[i] << endl;
        // }
        // for (int i = 0; i < k; i++)
        // {
        //     if (b[i] < 1)
        //     {
        //         flag = false;
        //         break;
        //     }
        // }

        if (s.size() == k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}