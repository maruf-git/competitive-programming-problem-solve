#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> m;

    for (int i = 0; i < s.size() - 1; i++)
    {
        string ans;
        ans.push_back(s[i]);
        ans.push_back(s[i + 1]);
        m[ans]++;
        ans.clear();
    }
    int mx = INT_MIN;
    string ans;
    for (auto u : m)
    {
        if (u.second > mx)
        {
            mx = u.second;
            ans = u.first;
        }
    }
    cout << ans << endl;

    return 0;
}
