class Solution {
public:
vector<int> dp;
// int fun(vector<int>& arr, int i, vector<int>& dp) {
//     if(i==arr.size() - 1) dp[i] = arr[i]; // single house
//     if(i==arr.size() - 2) dp[i] = max(arr[i], arr[i+1]); // two houses
//     if(dp[i] != -1) return dp[i];
//     return dp[i] = max(arr[i] + fun(arr,i+2, dp), 0 + fun(arr, i+1, dp));
// }

int funBottomUp(vector<int>& arr) {
    int n = arr.size();
    dp.clear();
    dp.resize(n);
    // corner case :
    if(n==1) return arr[0];
    // base case :
    dp[n-1] = arr[n-1];
    dp[n-2] = max(arr[n-1], arr[n-2]);

    // tabulation implementation
    for(int i = n-3; i >= 0; --i) {
        dp[i] = max(arr[i]+dp[i+2], 0 + dp[i+1]);
    }
    return dp[0];
}

    int rob(vector<int>& nums) {
        // recursive call 
        // vector<int> dp(nums.size()+1, -1);
        // return fun(nums, 0, dp); // we passed the array and the index. In Memoization

        // it is the returning bottom up dp answer :
        return funBottomUp(nums);
    }
};                                                                                                                                                                                                                    