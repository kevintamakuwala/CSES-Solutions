#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define INF (int)1e9
#define rep(i, s, n) for (int i = s; i < n; i++)
#define rrep(i, n, s) for (int i = n; i >= s; i--)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vll> vvll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef set<int> si;

int main()
{
    ll n;
    cin >> n;
    vll dp(n + 1, 0);
    dp[0] = 1;
    rep(i, 0, n + 1)
    {
        rep(j, 1, 7)
        {
            if (i >= j)
            {
                dp[i] = (dp[i] + dp[i - j]) % mod;
            }
        }
    }
    cout << dp[n];
    return 0;
}