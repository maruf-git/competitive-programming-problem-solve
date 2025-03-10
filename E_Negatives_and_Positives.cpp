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
        int arr[n];
        int neg = 0, zero = 0;
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += abs(arr[i]);
            if (arr[i] <= 0)
                neg++;
            if (arr[i] == 0)
                zero++;
            arr[i] = abs(arr[i]);
        }
        // cout<<sum<<endl;
        if (neg % 2 == 0)
            cout << sum << endl;
        else
        {
            sort(arr, arr + n);
            if (zero)
                cout << sum << endl;
            else
            {
                cout << sum - 2 * arr[0] << endl;
            }
        }
    }

    return 0;
}