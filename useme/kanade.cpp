#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

ll maxSubarraySum(ll arr[],int n) {
    ll max_sum = INT_MIN;
    ll current_sum = 0;
    
    for (int i=0;i<n;i++) {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }
    
    return max_sum;
}

//if we change this to 0 from INT_MIN then min 0 length subarray also considered

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}
