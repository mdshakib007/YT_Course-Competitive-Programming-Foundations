#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int n;
    cin >> n;
    string name;
    cin >> name;

    if (n != 5)
    {
        cout << "NO\n";
        return;
    }
    
    string ans = "Timur";
    sort(name.begin(), name.end());
    sort(ans.begin(), ans.end());

    if (name == ans)
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
        CASES();
    }
    return 0;
}