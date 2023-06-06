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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll s = n * (n + 1) / 2;
    if (s & 1)
    {
        cout << "0\n";
        return 0;
    }
    ll k = s / 2;
    vi prev(k + 1, 0), cur = prev;
    prev[0] = 1;
    rep(i, 1, n + 1)
    {
        rep(j, 1, k + 1)
        {
            int t = 0, nt = prev[j];
            if (i <= j)
            {
                t = prev[j - i];
            }
            cur[j] = (t + nt) % mod;
        }
        prev = cur;
    }
    cout << prev[k];

    return 0;
}