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
typedef vector<vll> vvll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef set<int> si;
ll power(ll j)
{
    ll ans = 1;
    rep(i, 1, 1 + j)
    {
        ans = ((ans % mod) * 2) % mod;
    }
    return ans;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << power(n) << '\n';
    return 0;
}