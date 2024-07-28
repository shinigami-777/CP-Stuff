#include <atcoder/modint>
#include <bits/stdc++.h>

using namespace std;
using mint = atcoder::modint;

int main() {
	int n, m;
	cin >> n >> m;
	mint::set_mod(m);

	mint c = 1;
	for (int i = 1; i <= n; i++) {
		c = (c * i) + (i % 2 == 1 ? -1 : 1);
		cout << c.val() << ' ';
	}
	cout << endl;
}
// in O(n) time
// Using principle of Inclusion Exclusion (Method 1)

#include <atcoder/modint>
#include <bits/stdc++.h>

using namespace std;
using mint = atcoder::modint;

int main() {
	int n, m;
	cin >> n >> m;
	mint::set_mod(m);

	mint a = 1, b = 0;
	cout << 0 << ' ';

	for (int i = 2; i <= n; i++) {
		mint c = (i - 1) * (a + b);
		cout << c.val() << ' ';
		a = b;
		b = c;
	}
	cout << endl;
}
// in O(n) time
// Using dp method. Using the formula !n=(n−1)(!(n−2)+!(n−1))      base case !0=1 and !1=0
//(just the recursion one written in iterative approach)
