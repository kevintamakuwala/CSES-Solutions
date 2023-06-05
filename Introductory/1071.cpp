#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
    ll a, b, t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a > b)
        {
            if (a & 1)
                cout << ((a - 1) * (a - 1) + b);
            else
                cout << (a * a - b + 1);
        }
        else
        {
            if (b & 1)
                cout << (b * b - a + 1);
            else
                cout << ((b - 1) * (b - 1) + a);
        }
        cout << '\n';
    }
    return 0;
}