#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
GCD
Imp properties-> finding sides of largest square which can tile the whole rectangle
l = 4 and b = 6;
largest side of tile = 2cm;
*/

ll gcd(ll a, ll b)
{ // Optimised Version  of Euclidean Algorithm
    // O(log(min(a, b))
    if (b == 0)
    {
        return a;
    }
    else

        return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    // O(log(min(a, b))
    return (a * b) / gcd(a, b);
}

int main()
{

    return 0;
}