#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;

        if (n < 2020)
            cout << "NO" << endl;
        else
        {
            int res = n / 2021, rem = n % 2021;
            if (n % 2021 == 0 || n % 2020 == 0)
                cout << "YES" << endl;
            else if (2020 - rem <= res)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}