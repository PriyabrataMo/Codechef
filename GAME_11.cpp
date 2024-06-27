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
        ll n, m;
        cin >> n >> m;
        vi a(n);
        vi b(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        if (n < 4 || m < 4 || (m+n<11))
        {
            cout << -1 << endl;
            continue;
        }

        sort(a.begin(), a.end(), greater<ll>());
        sort(b.begin(), b.end(), greater<ll>());
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < m; i++)
        // {
        //     cout << b[i] << " ";
        // }
        // cout << endl;
        ll ans = 0;
        for (ll i = 0; i < 4; i++)
        {
            ans += a[i];
        }
        for (ll i = 0; i < 4; i++)
        {
            ans += b[i];
        }
        ll l = 4;
        ll r = 4;
        // cout << ans << endl;
        ll ind = 3;
        while (ind > 0 && l < n && r < m)
        {
            if (a[l] > b[r])
            {
                ans += a[l];
                l++;
            }
            else
            {
                ans += b[r];
                r++;
            }
            ind--;
        }
        while (ind > 0 && l < n)
        {
            ans += a[l];
            l++;
            ind--;
        }
        while (ind > 0 && r < m)
        {
            ans += b[r];
            r++;
            ind--;
        }

        cout << ans << endl;
    }
    return 0;
}