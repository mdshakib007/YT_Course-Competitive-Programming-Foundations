#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;

    // convert into lower case
    if (s[0] == 'Y')
        s[0] = 'y';
    if (s[1] == 'E')
        s[1] = 'e';
    if (s[2] == 'S')
        s[2] = 's';

    if (s == "yes")
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}