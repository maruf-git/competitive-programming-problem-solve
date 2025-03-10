#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        int s, l, xl, sc, lc, xlc;
        cin >> s >> l >> xl >> sc >> lc >> xlc;

        int cnt = 0;
        if (xl > xlc)
        {
            cnt += xlc;
            l += xl - xlc;
        }
        else
        {
            cnt += xl;
        }

        if (l > lc)
        {
            cnt += lc;
            s += l - lc;
        }
        else
        {
            cnt += l;
        }
        cnt += min(s, sc);
        cout << cnt << endl;
    }

    return 0;
}