// codeforces.com/problemset/problem/318/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll n, k;
    cin >> n >> k;
    if (k <= ceil(n / 2.00))
    {
        cout << k + k - 1 << endl;
    }
    else
    {
        cout << (ll)((k - ceil(n / 2.00)) * 2) << endl;
    }

    return 0;
}