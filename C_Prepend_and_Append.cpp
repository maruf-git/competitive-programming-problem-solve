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
        string s;
        cin >> s;
        int l = 0, r = n - 1, ans = 0;
        while (l <= r)
        {
            if (s[l] != s[r])
            {
                l++;
                r--;
            }
            else
            {
                ans = r - l + 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
