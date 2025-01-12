// Problem Link:    https://codeforces.com/contest/762/problem/A
// Submission Link: https://codeforces.com/contest/762/submission/260693697

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    vector<ll> divisors;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (n / i != i)
                divisors.push_back(n / i);
        }
    }

    sort(divisors.begin(), divisors.end());

    if (divisors.size() < k)
        cout << -1;
    else
        cout << divisors[k - 1];

    return 0;
}