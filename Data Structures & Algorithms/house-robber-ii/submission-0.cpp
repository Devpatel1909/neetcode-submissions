class Solution {
   public:
    int dfs(vector<int>& nums, int i, int n, vector<int>& memo) {
        if (i > n) {
            return 0;
        }
        if (memo[i] != -1) return memo[i];

        int rob = nums[i] + dfs(nums, i + 2, n, memo);
        int skip = dfs(nums, i + 1, n, memo);

        return memo[i] = max(rob, skip);
    }
    int rob(vector<int>& nums) {
         int n = nums.size();
        if (n == 1) return nums[0];

        vector<int> memo1(n, -1);
        vector<int> memo2(n, -1);

        return max(
            dfs(nums, 0, n - 2, memo1),
            dfs(nums, 1, n - 1, memo2)
        ); 
    }
};
