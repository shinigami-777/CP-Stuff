// https://cp-algorithms.com/algebra/phi-function.html

int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
// this finds result of totient funtion in O(sqrt(n)) time


void phi_1_to_n(int n) {
    vector<int> phi(n + 1);
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i <= n; i++)
        phi[i] = i - 1;

    for (int i = 2; i <= n; i++)
        for (int j = 2 * i; j <= n; j += i)
              phi[j] -= phi[i];
}
// this finds the totient using the divisor sum property in O(nlogn) time


void precompute() {
	for (int i = 1; i < MAX_N; i++) { phi[i] = i; }
	for (int i = 2; i < MAX_N; i++) {
		// If i is prime
		if (phi[i] == i) {
			for (int j = i; j < NMAX; j += i) { phi[j] -= phi[j] / i; }
		}
	}
}

//