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
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef set<int> si;
si st;
void solve(int i, int s, int a[], vvi &dp)
{
    if (!i)
    {
        s += a[0];
        st.insert(s);
        return;
    }
    if (dp[i][s] != -1)
    {
        return;
    }
    solve(i - 1, s, a, dp);
    solve(i - 1, s + a[i], a, dp);
    dp[i][s] = s + a[i];
    st.insert(s + a[i]);
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    rep(i, 0, n)
    {
        cin >> a[i];
        sum += a[i];
    }

    vvi dp(n + 1, vi(sum + 10, -1));
    solve(n - 1, 0, a, dp);
    cout << st.size() << "\n";
    for (auto it : st)
    {
        cout << it << " ";
    }

    return 0;
}