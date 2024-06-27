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
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 0;
        ll cone = 0, czero = 0;
        vector<ll> pre(n, 0);
        pre[0] = (s[0] == '1') ? 1 : 0;
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + ((s[i] == '1') ? 1 : 0);
        }
        ans++;
        if (s[0] == '0')
        {
            czero++;
        }
        else
        {
            cone++;
        }
        for (int i = 1; i < n; i++)
        {
            ans++;
            if (s[i] == '1')
            {
                cone++;
            }
            else
            {
                czero++;
            }
        }
        // cout << czero << cone << endl;
        cout << ans << endl;
        // long long ans = 0;
        vector<int> count(2, 0); // count[0] for '0's and count[1] for '1's

        for (int L = 0; L < n; ++L)
        {
            fill(count.begin(), count.end(), 0); // reset counts for each new starting point L
            int mode = 0;                        // reset mode for each new starting point L

            for (int R = L; R < n; ++R)
            {
                int index = s[R] - '0';         // convert char to int ('0' -> 0, '1' -> 1)
                count[index]++;                 // increment count of '0' or '1'
                mode = max(mode, count[index]); // update mode

                if (count[0] == count[1])
                { // if counts are equal, mode is 2
                    mode = 2;
                }

                ans += mode; // add mode to total
            }
        }

        cout << ans << endl;
    }

    return 0;
}