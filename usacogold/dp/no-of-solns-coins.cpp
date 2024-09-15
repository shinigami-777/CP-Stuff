//this is another version of the coin problem where we need to find the number of solutions:
// in how many ways we can make x using coins(array)

/* The following code constructs an array count such that count[x] equals the
value of solve(x) for 0 ≤ x ≤ n */

count[0] = 1;
for (int x = 1; x <= n; x++) {
    for (auto c : coins) {
        if (x-c >= 0) {
            count[x] += count[x-c];
        }
    }
}