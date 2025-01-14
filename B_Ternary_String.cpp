// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        string s;
        cin >> s;
        int len = INT_MAX;
        int l = 0, r = 0;
        map<char, int> m;
        while (r < s.size())
        {
            m[s[r]]++;
            if (m['1'] >= 1 && m['2'] >= 1 && m['3'] >= 1)
            {
                len = min(len, r - l + 1);
                while (m['1'] >= 1 && m['2'] >= 1 && m['3'] >= 1)
                {
                    len = min(len, r - l + 1);
                    m[s[l]]--;
                    l++;
                }
            }
            r++;
        }
        if (len == INT_MAX)
            cout << 0 << endl;
        else
            cout << len << endl;
    }
    return 0;
}
