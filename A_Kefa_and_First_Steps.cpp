// link: https://codeforces.com/problemset/problem/580/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 1, prevVal = arr[0], ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= prevVal)
        {
            cnt++;
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 1;
        }
        prevVal = arr[i];
    }
    cout << max(ans, cnt) << endl;

    return 0;
}