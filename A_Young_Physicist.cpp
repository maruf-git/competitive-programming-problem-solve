#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0;
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            if (j == 0)
                x += arr[i][j];
            if (j == 1)
                y += arr[i][j];
            if (j == 2)
                z += arr[i][j];
        }
    }
    if (x == 0 && y == 0 && z == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}