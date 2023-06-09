#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i, s, n) for (int i = s; i < n; i++)
#define rrep(i, n, s) for (int i = n; i >= s; i--)
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
int main()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    vector<ll> prev(k + 1, 0);
    for (ll i = 0; i <= k; i++)
    {
        prev[i] = (i % a[0]) ? 1e9 : (i / a[0]);
    }
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 0; j <= k; j++)
        {
            ll t = 1e9, nt = prev[j];
            if (a[i] <= j)
            {
                t = 1 + prev[j - a[i]];
            }
            prev[j] = min(t, nt);
        }
    }
    ll ans = prev[k];

    if (ans >= 1e9)
        cout << -1;
    else
        cout << ans;
    return 0;
}