// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0, r = 0, mn = INT_MAX, sum = 0, ans = 1;
    while (r < n)
    {
        sum += v[r];
        if (r - l + 1 == k)
        {
            if (sum < mn)
            {
                mn = sum;
                ans = l + 1;
            }
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}
