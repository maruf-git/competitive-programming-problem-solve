// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    int tst;
    cin >> tst;
    while (tst--)
    {
        int a;
        cin >> a;
        auto idx = upper_bound(v.begin(), v.end(), a) - v.begin();
        if (idx < n)
            cout << idx << endl;
        else
            cout << n << endl;
    }
    return 0;
}
