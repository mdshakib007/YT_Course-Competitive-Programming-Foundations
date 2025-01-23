#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<bool> prime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            cout << i << " => " << n / i << '\n';
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }

    // for (int i = 2; i <= n; i++)
    // {
    //     if (prime[i])
    //         cout << i << ' ';
    // }
    return 0;
}