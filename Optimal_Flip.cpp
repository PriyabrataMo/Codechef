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
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0, k = 0, abcd = 0, m = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] % 2 == 0)
            {
                ans += (n - i);
                k = (n - i);
            }
            else
            {
                ans += k;
                abcd++;
                m = max(m, abcd);
            }
        }
        m++;
        cout << ans + ((m / 2) * (m - (m / 2))) << endl;
    }
    return 0;
}
