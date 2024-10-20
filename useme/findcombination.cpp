#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define endl '\n'
#define rev_sort(v) sort(all(v),greater<int>())

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll M=1000000007;


// Function to compute x^y % p using iterative method 
ll power(ll x, ll y, ll p) { 
    ll res = 1; // Initialize result 
    x = x % p; // Update x if it is more than or equal to p 
 
    while (y > 0) { 
        // If y is odd, multiply x with the result 
        if (y & 1) { 
            res = (res * x) % p; 
        } 
        // y must be even now 
        y = y >> 1; // y = y/2 
        x = (x * x) % p; // Change x to x^2 
    } 
    return res; 
} 
 
// Function to precompute factorials and their inverses 
void precomputeFactorials(ll fact[], ll invFact[], int n) { 
    // Compute all factorials % M
    fact[0] = 1; 
    for (int i = 1; i <= n; i++) { 
        fact[i] = (fact[i - 1] * i) % M; 
    } 
 
    // Compute inverses using Fermat's Little Theorem 
    invFact[n] = power(fact[n], M - 2, M); // invFact[n] = (fact[n]^(M-2)) % MOD 
    for (int i = n - 1; i >= 0; i--) { 
        invFact[i] = (invFact[i + 1] * (i + 1)) % M; 
    } 
} 
 
// Function to compute nCr % M 
ll nCr(int n, int r, ll fact[], ll invFact[]) { 
    if (r > n) return 0; 
    return (fact[n] * invFact[r] % M) * invFact[n - r] % M; 
}


// ask for it this way
/*
ll fact[200006], invFact[200006]; 
precomputeFactorials(fact, invFact, 200005);
nCr(n, i, fact, invFact);
*/