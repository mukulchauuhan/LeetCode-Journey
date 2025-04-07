class Solution {
public:

int fun(vector<int>& arr, int i, vector<int>& dp) {
    if(i==arr.size() - 1) dp[i] = arr[i]; // single house
    if(i==arr.size() - 2) dp[i] = max(arr[i], arr[i+1]); // two houses
    if(dp[i] != -1) return dp[i];
    return dp[i] = max(arr[i] + fun(arr,i+2, dp), 0 + fun(arr, i+1, dp));
}

    int rob(vector<int>& nums) {
        // recursive call :
        vector<int> dp(nums.size()+1, -1);

        return fun(nums, 0, dp); // we passed the array and the index.
    }
};                                                                                                                                                                                                                    