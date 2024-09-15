//read this if u want to understand
void search() {
  if (permutation.size() == n) {
  // process permutation
  } 
  else {
    for (int i = 0; i < n; i++) {
      if (chosen[i]) continue;
      chosen[i] = true;
      permutation.push_back(i);
      search();
      chosen[i] = false;
      permutation.pop_back();
    }
  }
}


// use this
// does the same
do {
// process permutation
} while (next_permutation(permutation.begin(),permutation.end()))