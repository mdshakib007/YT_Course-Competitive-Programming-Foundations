#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int l = 0, r = 0, cnt = 0;
    while (r < m)
    {
        while (l < n && b[r] > a[l])
        {
            cnt++;
            l++;
        }
        cout << cnt << ' ';
        r++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while(t--)
    // {
    CASES();
    // }
    return 0;
}