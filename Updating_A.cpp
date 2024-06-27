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
        vi a(n);
        vi b(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                b[i] = abs(a[i]);
            }
        }
        ll str = 0;
        ll sum = 0;
        ll temp = 0;
        if (b[0] == 0)
        {
            str = 0;
            sum = 0;
            temp = 0;
        }
        else
        {
            str = 1;
            sum = b[0];
            temp = b[0];
        }

        for (int i = 1; i < n; i++)
        {
            if (b[i] < 0)
            {
                temp += abs(b[i]);
                str++;
            }
            else
            {
                sum = max(temp, sum);
                str = 0;
            }
        }
        if (str > 0)
        {
            sum = max(temp, sum);
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += a[i];
        }
        if (str == 0)
        {

            cout << ans << endl;
        }
        if (str == 1)
        {
        }
    }
    return 0;
}