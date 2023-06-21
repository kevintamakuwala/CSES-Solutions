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
    ll n;
    cin >> n;
    ll sum = (n * (n + 1) / 2);
    if (sum & 1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        vll set1, set2;
        sum /= 2;
        for (int i = n; i > 0; i--)
        {
            if (sum >= i)
            {
                sum -= i;
                set1.pb(i);
            }
            else
            {
                set2.pb(i);
            }
        }
        cout << set1.size() << '\n';
        for (auto it : set1)
            cout << it << " ";
        cout << '\n'
             << set2.size() << '\n';
        for (auto it : set2)
            cout << it << " ";
    }
    return 0;
}