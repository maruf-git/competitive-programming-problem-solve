// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// unsolved
int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        vector<pair<int, int>> vp;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                vp.push_back({arr[i], arr[j]});
            }
        }

        map<int, int> m;
        for (auto u : vp)
        {
            if (mp[u.first] >= 1 && mp[u.second] >= 1)
                m[u.first + u.second]++;
            mp[u.first]--;
            mp[u.second]--;
        }
        int w = arr[1], w_cnt = INT_MIN;
        for (auto u : m)
        {
            cout << u.first << " " << u.second << " " << endl;
        }
    }
    return 0;
}
