//to find the number of elements having value x
auto a = lower_bound(array, array+n, x);
auto b = upper_bound(array, array+n, x);
cout << b-a << "\n";

//using equal_range the code becomes shorter
auto r = equal_range(array, array+n, x);
cout << r.second-r.first << "\n";

//binary search for finding the first value from where the function ok(x) starts changing
//eg- false flase false true true
//the ans in this eg is 3
int x = -1;
for (int b = z; b >= 1; b /= 2) {
while (!ok(x+b)) x += b;
}
int k = x+1;
