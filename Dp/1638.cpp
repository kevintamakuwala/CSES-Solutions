#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i, s, n) for (int i = s; i < n; i++)
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main()
{
    ll n;
    cin >> n;
    vector<string> v;
    rep(i, 0, n)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    if (v[0][0] == '*' or v[n - 1][n - 1] == '*')
    {
        cout << "0\n";
        return 0;
    }
    vll prev(n + 1, 0), cur = prev;
    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            if (i == 0 and j == 0)
            {
                cur[j] = 1;
                continue;
            }
            ll up = 0, left = 0;
            if (i > 0 and v[i - 1][j] != '*')
            {
                up = prev[j];
            }
            if (j > 0 and v[i][j - 1] != '*')
            {
                left = cur[j - 1];
            }
            cur[j] = (up + left) % 1000000007;
        }
        prev = cur;
    }
    cout << prev[n - 1] << '\n';
    return 0;
}