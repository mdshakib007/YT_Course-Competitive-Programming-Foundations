#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // O(N) solution
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << ' ';
        }
    }

    // O(sqrt(N)) solution
    int m;
    cin >> m;
    vector<int> a;
    for (int i = 1; i * i <= m; i++)
    {
        if (m % i == 0)
        {
            a.push_back(i);
            if (!(m / i == i))
                a.push_back(m / i);
        }
    }
    sort(a.begin(), a.end());
    for (int i : a)
        cout << i << ' ';
    return 0;
}