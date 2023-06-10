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
typedef unordered_map<ll, ll> umll;
typedef unordered_map<int, int> umii;
typedef set<int> si;
typedef set<ll> sll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,ans=1;
    cin >> n;
    vll a(n);
    // sll st;
    rep(i, 0, n)
    {
        cin >> a[i];
        // st.insert(a[i]);
    }
    // cout << st.size() << '\n';
    sort(all(a));
    rep(i,0,n-1){
        if(a[i]!=a[i+1]){
            ans++;
        }
    }
    cout<<ans<<'\n';

    return 0;
}