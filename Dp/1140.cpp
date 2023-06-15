// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define mod 1000000007
// #define mp make_pair
// #define pb push_back
// #define INF (int)1e9
// #define rep(i, s, n) for (int i = s; i < n; i++)
// #define rrep(i, n, s) for (int i = n; i >= s; i--)
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef vector<int> vi;
// typedef vector<ll> vll;
// typedef vector<string> vs;
// typedef vector<pii> vii;
// typedef vector<pll> vpll;
// typedef vector<vi> vvi;
// typedef vector<vll> vvll;
// typedef map<int, int> mii;
// typedef map<ll, ll> mll;
// typedef set<int> si;

// ll solve(ll i, ll k, ll n, vll &st, vector<pair<pll, ll>> &v, vll &dp)
// {
//     rrep(i, n - 1, 0)
//     {
//         ll s = v[i].first.first;
//         ll e = v[i].first.second;
//         ll p = v[i].second;
//         ll pick = 0, notPick = dp[i + 1];
//         ll next = upper_bound(st.begin(), st.end(), e) - st.begin();
//         pick = dp[next] + p;
//         dp[i] = max(pick, notPick);
//     }
//     return dp[0];
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     vll s;
//     vector<pair<pll, ll>> v;
//     rep(i, 0, n)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         s.pb(a);
//         v.pb({{a, b}, c});
//     }
//     sort(all(v));
//     sort(all(s));
//     vll dp(n + 1, 0);
//     cout << solve(0, 0, n, s, v, dp);
//     return 0;
// }