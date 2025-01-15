#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << "prime\n";
    }
    else
    {
        cout << "not prime\n";
    }

    return 0;
}