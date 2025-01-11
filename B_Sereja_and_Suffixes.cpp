// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    set<int> st;
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        st.insert(arr[i]);
        ans[i] = st.size();
    }
    while (m--)
    {
        int idx;
        cin >> idx;
        cout << ans[idx - 1] << endl;
    }
    return 0;
}
