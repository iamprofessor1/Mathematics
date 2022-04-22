#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll countDigit(ll n)
{
    return (log10(n) + 1);
}

int main()
{
    ll n;
    cin >> n;
    cout << countDigit(n) << '\n';
    return 0;
}