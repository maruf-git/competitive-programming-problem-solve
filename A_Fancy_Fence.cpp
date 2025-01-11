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
        if ((360) % (180 - n) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
