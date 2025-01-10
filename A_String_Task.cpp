#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (auto &u : s)
        u = tolower(u);
    string ans;
    for (auto u : s)
        if (u == 'a' || u == 'e' || u == 'i' || u == 'o' || u == 'u' || u == 'y')
            continue;
        else
            ans.push_back(u);
    for (auto u : ans)
        cout << "." << u;
    cout << endl;

    return 0;
}