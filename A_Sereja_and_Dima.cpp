// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (auto &u : arr)
        cin >> u;
    int s = 0, d = 0;
    int l = 0, r = n - 1, t = 1;
    while (l != r)
    {
        if (arr[l] >= arr[r])
        {
            if (t % 2)
                s += arr[l];
            else
                d += arr[l];
            l++;
        }
        else
        {
            if (t % 2)
                s += arr[r];
            else
                d += arr[r];
            r--;
        }
        t++;
    }
    if (t % 2)
        s += arr[l];
    else
        d += arr[l];
    cout << s << " " << d << endl;
    return 0;
}
