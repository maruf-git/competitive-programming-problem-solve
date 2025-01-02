// In The Name of Allah
// codeforces.com/contest/158/problem/A
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], val = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == k - 1)
            val = a[i];
    }

    // way 1
    int cnt = 0;
    /*
      for (int i = 0; i < n; i++)
    {
        if (a[i] >= val && a[i] > 0)
            cnt++;
    }
    cout << cnt << endl;
    */

    //    way 2
    sort(a, a + n);
    int index = n;
    if (val == 0)
    {
        index = upper_bound(a, a + n, val) - a;
    }
    else
    {
        index = lower_bound(a, a + n, val) - a;
    }

    if (index == n)
        cout << 0 << endl;
    else
        cout << n - index << endl;

    return 0;
}
