int inv(int x) { return x <= 1 ? x : MOD - MOD / x * inv(MOD % x) % MOD; }

//calculation of inverse mod using euclidean division

inv[1] = 1;  // assume we already defined this array
for (int i = 2; i < MOD; i++) { inv[i] = MOD - MOD / i * inv[MOD % i] % MOD; }

//The advantage of this approach is that we can precompute the inverse modular of numbers in the range [1, MOD) in O(MOD) time.
