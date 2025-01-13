// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m[a]++;
    }
    map<int, int> m2;
    for (int i = 0; i < n - 1; i++)
    {
        int a;
        cin >> a;
        ;
        m2[a]++;
        m[a]--;
    }
    for (int i = 0; i < n - 2; i++)
    {
        int a;
        cin >> a;
        m2[a]--;
    }
    for (auto u : m)
    {
        if (u.second != 0)
        {
            cout << u.first << endl;
            break;
        }
    }
    for (auto u : m2)
    {
        if (u.second != 0)
        {
            cout << u.first << endl;
            break;
        }
    }

    return 0;
}
