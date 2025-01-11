// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin >> s;
    int pf[s.size()];
    pf[0] = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            pf[i] = pf[i - 1] + 1;
        }
        else
            pf[i] = pf[i - 1];
    }

    int tst;
    cin >> tst;
    while (tst--)
    {
        int a, b;
        cin >> a >> b;
        cout << pf[b-1] - pf[a-1] << endl;
    }
    return 0;
}
