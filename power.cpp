#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long powerRecursive(long long x, long long n)
{
    // Θ(log n) -> time & space
    if (n == 0)
    {
        return 1;
    }
    long long temp = powerRecursive(x, n / 2);
    temp = temp * temp;
    if (n % 2 == 0)
    {
        return temp;
    }
    else
        return temp * x;
}

long long binaryExpo(long long n, long long x)
{
    long long res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            // means that bit is set
            res *= x;
        }
        x *= x;
        n = n >> 1;
    }
    return res;
}

long long binaryExpoMOD(long long base, long long exponent, long long modul)
{
    long long res = 1;
    // Time Complexity -> O(log n)
    // Space -> O(1)
    while (exponent > 0)
    {
        if (exponent & 1)
        {
            // means that bit is set
            res = (((res % modul) * (base % modul)) % modul);
        }
        base = (((base % modul) * (base % modul)) % modul);
        exponent = exponent >> 1;
    }
    return res;
}

int main()
{
    
    return 0;
}