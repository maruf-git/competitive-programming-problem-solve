// codeforces.com/problemset/problem/160/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int cnt = 0, half = ceil(sum / 2.0);
    sort(arr, arr + n, greater<int>());
    // cout << "sum:" << sum << " , half:" << half << endl;
    for (auto u : arr)
    {
        cnt++;
        if (sum - u >= half)
        {
            sum -= u;
        }
        else
        {
            break;
        }
    }
    cout << cnt << endl;

    return 0;
}