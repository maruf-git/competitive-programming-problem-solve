// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int m;
    cin >> m;
    map<int, int> mp1, mp2;
    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
        mp1[arr1[i]]++;
    }
    sort(arr1, arr1 + m);
    int n;
    cin >> n;
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
        mp2[arr2[i]]++;
    }
    sort(arr2, arr2 + n);

    int ans = 0;
    if (m < n)
    {
        for (auto u : arr1)
        {
            if (mp2[u - 1])
            {
                mp2[u - 1]--;
                ans++;
            }
            else if (mp2[u])
            {
                mp2[u]--;
                ans++;
            }
            else if (mp2[u + 1])
            {
                mp2[u + 1]--;
                ans++;
            }
        }
    }
    else
    {
        for (auto u : arr2)
        {
            if (mp1[u - 1])
            {
                mp1[u - 1]--;
                ans++;
            }
            else if (mp1[u])
            {
                mp1[u]--;
                ans++;
            }
            else if (mp1[u + 1])
            {
                mp1[u + 1]--;
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
