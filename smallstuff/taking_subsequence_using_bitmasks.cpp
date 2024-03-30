for (int b = 0; b < (1<<n); b++) {
vector<int> subset;
for (int i = 0; i < n; i++) {
if (b&(1<<i)) subset.push_back(i);
}
}

//time complexity is O(n*2^n)
