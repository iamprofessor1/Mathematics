#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
* Prime number have two divisor only;
* 1 is neither prime nor composite.
* Every prime number can be represnted in terms of (6*n+1) or(6*n -1);
except 2 and 3 , where n is natural number.
* 2 and 3 are only two prime number which are consecutive.
*/

// Why sqrt n ?
/*Because all divisor occur in pair
 i.e x * y == n
 x<= y (observation)
 x * x <=n;
 That's why it have O(sqrt(n));
 fastest implementation
*/

bool isPrime(ll n)
{
    if (n == 1)
    {
        // because 1 is not Prime Nor composite
        return false;
    }
    if (n == 2 || n == 3)
    {
        // because 2 and 3 is prime number
        return true;
    }
    if ((n % 2) == 0 || (n % 3) == 0)
    {
        return false;
        // removing even and multiple of 3
    }

    for (ll i = 5; i * i <= n; i += 6)
    {
        if (((n % i) == 0) || (n % (i + 2) == 0))
        {
            // using concept of prime number can be represented in terms of (6*n+1) or(6*n -1);
            return false;
        }
    }
    return true;
}

void primeFactors(ll n)
{
    // if all prime factors are multiplied then it will give original number
    // map<ll, ll> m; // used for storage
    if (n <= 1)
    {
        return;
        // return m ;
    }
    while (n % 2 == 0)
    {
        // divisibility by 2
        cout << 2 << " ";
        // m[2]++;
        n /= 2;
    }
    while (n % 3 == 0)
    { // divisibility by 3
        cout << 3 << " ";
        // m[3]++;
        n /= 3;
    }

    for (ll i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            // m[i]++;
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            cout << i + 2 << " ";
            // m[i + 2]++;
            n = n / (i + 2);
        }
        // using concept of prime number can be represented in terms of (6*n+1) or(6*n -1);
    }
    if (n > 3)
    {
        cout << n << " ";
        // m[n]++;
    }
    // return m;
    // Change fundtion return type;
}

void printAllDivisors(long long n)
{
    long long i;
    // Print all divisor range [1 ,sqrt(n));
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    if (i - (n / i) == 1)
    {
        i--;
    }
    // Print all divisor range [sqrt(n),n];
    for (; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << n / i << " ";
        }
    }
}
// return all primes b/w 1 to n
vector<long long> sieve(long long n)
{
    vector<bool> isprime(n + 1, true);
    // Earlier Consider all number are primes
    // Time Complexity - O(n Log logn);
    vector<long long> primes;
    // To save prime number till 
    for (long long i = 2; i * i <= n; i++)
    {
        if (isprime[i])
        {
            // cout<<i<<" ";
            for (long long p = i * i; p <= n; p += i)
            {
                // Mark  false as they are multiple of previous number
                isprime[p] = false;
            }
        }
    }
    for (long long i = 2; i <= n; i++)
        if (isprime[i])
        { // cout<<i<<" ";
            primes.push_back(i);
        }
    return primes;
}

int main()
{
    printAllDivisors(30);

    return 0;
}
