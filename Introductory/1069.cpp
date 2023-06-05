#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    map<char, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]].push_back(i);
    }

    int maxi = -1e9;
    for (auto it : mp)
    {
        int cnt = 1;
        for (int i = 0; i < (it.second).size() - 1; i++)
        {
            if (it.second[i] + 1 == it.second[i + 1])
            {
                maxi = max(maxi, ++cnt);
            }
            else
                cnt = 1;
        }
        maxi = max(maxi, cnt);
    }
    cout << maxi;
    return 0;
}