#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<bool> is_prime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i])
            primes.push_back(i);
    }

    int idx = 0;
    vector<int> factors;
    while (n > 1)
    {
        if (n % primes[idx] == 0)
        {
            while (n % primes[idx] == 0)
            {
                factors.push_back(primes[idx]);
                n = n / primes[idx];
            }
        }
        else{
            idx++;
        }
    }

    for(int val : factors) cout << val << ' ';

    return 0;
}