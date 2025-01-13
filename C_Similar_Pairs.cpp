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
        map<int, int> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i] % 2]++;
        }
        if (m[0] % 2 == 0 && m[1] % 2 == 0)
            cout << "YES" << endl;
        else
        {
            sort(arr, arr + n);
            int flag = 0;
            for (int i = 1; i < n; i++)
            {
                if (arr[i] == arr[i - 1] + 1)
                    flag = 1;
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
