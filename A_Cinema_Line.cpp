// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> m;
    for (auto u : arr)
    {
        m[u]++;
        if (u == 50)
        {
            if (m[25])
            {
                m[25]--;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        else if (u == 100)
        {
            if (m[50] >= 1 && m[25] >= 1)
            {
                m[50]--;
                m[25]--;
            }
            else if (m[50] == 0 && m[25] >= 3)
            {
                m[25] -= 3;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
