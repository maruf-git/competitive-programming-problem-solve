#include <bits/stdc++.h>
using namespace std;

int main()
{
    // qwertyuiop
    // asdfghjkl;
    // zxcvbnm,./
    char ch;
    cin >> ch;
    string s;
    cin >> s;
    string k1 = "qwertyuiop", k2 = "asdfghjkl;", k3 = "zxcvbnm,./";
    for (int i = 0; i < s.size(); i++)
    {
        // check1
        for (int j = 0; j < k1.size(); j++)
        {
            if (ch == 'L')
            {
                if (s[i] == k1[j])
                {
                    cout << k1[j + 1];
                }
            }
            else
            {
                if (s[i] == k1[j])
                {
                    cout << k1[j - 1];
                }
            }
        }
        // check2
        for (int j = 0; j < k2.size(); j++)
        {
            if (ch == 'L')
            {
                if (s[i] == k2[j])
                {
                    cout << k2[j + 1];
                }
            }
            else
            {
                if (s[i] == k2[j])
                {
                    cout << k2[j - 1];
                }
            }
        }
        // check3
        for (int j = 0; j < k3.size(); j++)
        {
            if (ch == 'L')
            {
                if (s[i] == k3[j])
                {
                    cout << k3[j + 1];
                }
            }
            else
            {
                if (s[i] == k3[j])
                {
                    cout << k3[j - 1];
                }
            }
        }
    }

    return 0;
}