#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s[0] != '-')
        cout << s << endl;
    else
    {
        int last = s.back() - '0';
        int second_last = s[s.size() - 2] - '0';
        if (last > second_last)
            s.pop_back();
        else
            s.erase(s.begin() + (s.size() - 2));
        cout << stoi(s) << endl;
    }

    return 0;
}