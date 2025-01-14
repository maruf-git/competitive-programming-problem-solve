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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0, r = 0, mx = INT_MIN;
        map<char, int> m;
        while (r < n)
        {
            m[s[r]]++;
            if (r - l + 1 == k)
            {
                mx = max(mx, m['B']);
                m[s[l]]--;
                l++;
            }
            r++;
        }
        cout << k - mx << endl;
    }
    return 0;
}
