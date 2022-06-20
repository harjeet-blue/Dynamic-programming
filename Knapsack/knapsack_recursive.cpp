
// recursive code of knapsack with memoisation

long long dp[n+1][W+1];
memset(dp, -1 , sizeof(dp));

long long knapsack(int n, long long W, long long wt[], long long val[]){

    if(n==0 || W==0)    // base condition if no of items is 0 or Max capacity of knapsack is 0 then porfit gotta be 0
        return 0;

    if(dp[n][W] != -1)return dp[n][W];     // memoize

    long long ans = knapsack(n-1, W, wt, val);  // at worst we will not include the element

    if(W>= wt[n-1])
        ans = max(ans, knapsack(n-1, W-wt[n-1], wt, val));     // if we include the present element

    return dp[n][W] = ans;  
}