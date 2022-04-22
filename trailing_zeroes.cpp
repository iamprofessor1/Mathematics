#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll trailing_zero_in_factorial(ll n)
{
    // time complexity  -> O(log5N);
    ll ans = 0;
    for (ll i = 5; i <= n; i = i * 5)
    {
        ans += (n / i);
    }
    return ans;
}



int main()
{

    return 0;
}