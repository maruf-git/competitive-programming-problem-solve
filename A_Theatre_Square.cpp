#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m, a;
    cin >> n >> m >> a;
    if (n > a || m > a)
    {
        ll ans = 1;
        if (n > a)
            ans *= ceil(1.00 * n / a);
        if (m > a)
            ans *= ceil(1.00 * m / a);
        cout << ans << endl;
    }
    else
        cout << 1 << endl;

    return 0;
}