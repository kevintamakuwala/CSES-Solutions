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
int dirX[4] = {-1, 0, 1, 0};
int dirY[4] = {0, 1, 0, -1};
void dfs(vs &v, vvi &vis, int i, int j, int n, int m)
{
    vis[i][j] = 1;
    rep(ind, 0, 4)
    {
        int nrow = i + dirX[ind];
        int ncol = j + dirY[ind];

        if (nrow >= 0 and ncol >= 0 and nrow < n and ncol < m and vis[nrow][ncol] == 0 and v[nrow][ncol] != '#')
        {
            dfs(v, vis, nrow, ncol, n, m);
        }
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vs v;
    int n, m;
    cin >> n >> m;
    rep(i, 0, n)
    {
        string s;
        cin >> s;
        v.pb(s);
    }

    ll cnt = 0;
    vvi vis(n, vi(m, 0));
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            if (!vis[i][j] and v[i][j] != '#')
            {
                dfs(v, vis, i, j, n, m);
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}