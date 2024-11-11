#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void CASES()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ((a > b && a < c) || (a > c && a < b))
    {
        cout << a << '\n';
    }
    else if ((b > a && b < c) || (b > c && b < a))
    {
        cout << b << '\n';
    }
    else 
    {
        cout << c << '\n';
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