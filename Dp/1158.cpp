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

    int n, k;
    cin >> n >> k;
    ll price[n], pages[n];
    rep(i, 0, n) cin >> price[i];
    rep(i, 0, n) cin >> pages[i];
    vll prev(k + 1, 0);
    rep(j, 0, k + 1)
    {
        if (price[0] <= j)
        {
            prev[j] = pages[0];
        }
    }
    rep(i, 1, n)
    {
        rrep(j, k, 0)
        {
            ll t = 0, nt = prev[j];
            if (price[i] <= j)
            {
                t = prev[j - price[i]] + pages[i];
            }
            prev[j] = max(t, nt);
        }
    }
    cout << prev[k] << '\n';
    return 0;
}