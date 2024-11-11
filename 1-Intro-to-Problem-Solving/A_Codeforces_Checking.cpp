#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    char c;
    cin >> c;

    // codeforces
    if(c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's'){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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