#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        ll n;
        cin >> n;
        if (n % 2)
            cout << "YES" << endl;
        else
        {
            while (n)
            {
                if (n % 2 == 0)
                    n = n / 2;
                else
                    break;
            }
            // cout<<n<<endl;
            if (n == 0 || n == 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }

    return 0;
}