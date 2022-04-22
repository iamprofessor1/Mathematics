#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll countDigit(ll n)
{ // O(1) -> Solution
    return (log10(n) + 1);
}

ll AP_sum(ll first_term, ll diff, ll no_of_term)
{
    ll last_term = first_term + (no_of_term - 1) * diff;
    ll sum = ((no_of_term) * (first_term + last_term)) / 2;
    return sum;
}

ll GP_sum(ll first_term, ll common_ratio, ll no_of_term)
{
    ll last_term = first_term * pow(common_ratio, no_of_term - 1);
    ll sum = first_term * (pow(common_ratio, no_of_term) - 1) / (common_ratio - 1);
    return sum;
}

int main()
{
    ll n;
    cin >> n;
    cout << countDigit(n) << '\n';
    return 0;
}