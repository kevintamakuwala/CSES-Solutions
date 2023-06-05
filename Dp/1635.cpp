#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i, s, n) for (int i = s; i < n; i++)
typedef vector<ll> vll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, x;
    cin >> n >> x;
    vll a(n), dp(x + 1, 0);
    for (int i = 0; i <= x; ++i)
        cin >> a[i];
 
    dp[0] = 1;
    rep(i, 1, x + 1)
    {
        dp[i] = 0;
        for (auto j : a)
        {
            if (i - j >= 0)
                dp[i] = (dp[i] + dp[i - j]) % 1000000007;
        }
    }
    cout << (dp[x]);
    return 0;
}