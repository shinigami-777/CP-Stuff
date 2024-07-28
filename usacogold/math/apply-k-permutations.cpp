vector<int> applyPermutation(vector<int> sequence, vector<int> permutation) {
    vector<int> newSequence(sequence.size());
    for(int i = 0; i < sequence.size(); i++) {
        newSequence[i] = sequence[permutation[i]];
    }
    return newSequence;
}

vector<int> permute(vector<int> sequence, vector<int> permutation, long long k) {
    while (k > 0) {
        if (k & 1) {
            sequence = applyPermutation(sequence, permutation);
        }
        permutation = applyPermutation(permutation, permutation);
        k >>= 1;
    }
    return sequence;
}

//we are given a sequence that we need to apply a given permutation to k times.. The time complexity will be O(kn).
// To optimize it we use binary exponentiationon k and transform the premutation. 
// Think of it as applying k^2 permutations would just be (Matrix ^p)^p  hence p^2
// Takes O(nlogn) time