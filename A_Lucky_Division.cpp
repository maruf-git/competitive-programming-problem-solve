#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            string a = to_string(i);
            string b = to_string(n / i);
            int flag = 1;
            for (auto u : a)
            {
                if (u != '4' && u != '7')
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                cout << "YES" << endl;
                return 0;
            }
            flag = 1;
            for (auto u : b)
            {
                if (u != '4' && u != '7')
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}