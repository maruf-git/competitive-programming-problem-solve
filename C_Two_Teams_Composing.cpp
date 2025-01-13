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
        int n;
        cin >> n;
        map<int, int> m;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            m[a]++;
            mx = max(m[a], mx);
        }
        if (mx < m.size())
            cout << mx << endl;
        else if (mx > m.size())
            cout << m.size() << endl;
        else
            cout << mx - 1 << endl;
    }
    return 0;
}
