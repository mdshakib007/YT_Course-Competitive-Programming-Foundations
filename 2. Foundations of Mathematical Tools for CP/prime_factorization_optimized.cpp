#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> factors;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                factors.push_back(i);
                n /= i;
            }
        }
    }
    if (n > 1)
        factors.push_back(n);

    for (int val : factors)
        cout << val << ' ';
    return 0;
}