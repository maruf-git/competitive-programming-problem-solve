#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
        m[s[i]]++;
        
    if (m['0'] == 0 || m['1'] == 0)
        cout << n << endl;
    else
        cout << n - min(m['0'], m['1']) * 2 << endl;

    return 0;
}