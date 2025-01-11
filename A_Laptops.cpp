// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first < p2.first)
        return false;
    else if (p1.first == p2.first)
        if (p1.second < p2.second)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vp.push_back({a, b});
    }
    sort(vp.begin(), vp.end(),cmp);

    int alex = 0;
    for (int i = 0; i < vp.size(); i++)
    {

        if (vp[i].first < vp[i - 1].first && vp[i].second > vp[i - 1].second)
            alex++;
    }
    if (alex)
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;

    return 0;
}
