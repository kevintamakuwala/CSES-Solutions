#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i, s, n) for (int i = s; i < n; i++)
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
    vector<ll> prev(k + 1);
    for (ll i = 0; i <= k; i++)
    {
        prev[i] = (i % a[0]) ? 0 : 1;
    }
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 0; j <= k; j++)
        {
            ll t = 0, nt = prev[j];
            if (a[i] <= j)
            {
                t = prev[j - a[i]];
            }
            prev[j] = (t + nt) % 1000000007;
        }
    }
    cout<<prev[k]<<'\n';
    return 0;
}