//to find the number of elements having value x
auto a = lower_bound(array, array+n, x);
auto b = upper_bound(array, array+n, x);
cout << b-a << "\n";

//using equal_range the code becomes shorter
auto r = equal_range(array, array+n, x);
cout << r.second-r.first << "\n";