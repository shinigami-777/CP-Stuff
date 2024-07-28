#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
const int MOD = 1e9 + 7;

int main() {
	ll x = exp(2, MOD - 2, MOD);
	cout << x << "\n";  // 500000004
	assert(2 * x % MOD == 1);
}