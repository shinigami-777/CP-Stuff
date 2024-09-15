const int N=1e9;   //choose a really big number
int solve(int x,int coins) {
    if(x<0)  return N;
    if(x==0) return 0;
    int best=N;
    for(auto c:coins)
      best=min(best,solve(x-c)+1);

    return best;
}

// get the min number of coins needed to make the sum x. We have seen a greedy approach for this is all the values are divisible by the ones lower than them but this is not the case always.
// the greedy solution does not work if coins: 3 5 7 10
// use memoization with this

