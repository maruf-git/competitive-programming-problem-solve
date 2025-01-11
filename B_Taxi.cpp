// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    int cnt = 0;
    cnt += m[4];
    if (m[3] < m[1])
    {
        cnt += m[3];
        m[1] = m[1] - m[3];
    }
    else
    {
        cnt += m[3];
        m[1] = 0;
    }
    cnt += m[2] / 2;
    if (m[2] % 2)
    {
        cnt++;
        m[1] -= 2;
    }
    if (m[1])
    {
        cnt = cnt + ceil(1.00 * m[1] / 4);
    }
    cout << cnt << endl;

    return 0;
}
