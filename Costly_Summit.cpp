#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, lc;
        cin >> n >> lc;
        string s;
        cin >> s;
        vector<int> v(5, 0);
        for (auto u : s)
        {
            v[u - 'A']++;
        }
        sort(v.begin(), v.end());
        int cost = 0, last = 0, d = 0;
        for (int i = 0; i < v.size(); i++)
        {
            d += v[i];
            int totalCost = d * (d + 1) / 2;
            if (totalCost - last < lc)
            {
                cost += totalCost - last;
            }
            else
            {
                cost += lc;
            }
            last = totalCost;
        }
        cout << cost << endl;
    }

    return 0;
}