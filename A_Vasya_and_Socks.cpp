#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int day = 0, ans = 0;
    while (n > 0)
    {
        n--;
        day++;
        if (day % m == 0)
            n++;
    }
    cout << day << endl;

    return 0;
}