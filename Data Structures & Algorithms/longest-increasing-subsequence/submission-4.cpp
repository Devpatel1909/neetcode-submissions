#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int c(vector<int>& nums, int i, int j, vector<vector<int>>& dp) {
        if (i == nums.size()) {
            return 0;
        }

        if (dp[i][j + 1] != -1) {
            return dp[i][j + 1];
        }

        // Don't take nums[i]
        int notTake = c(nums, i + 1, j, dp);

        // Take nums[i]
        int take = 0;
        if (j == -1 || nums[j] < nums[i]) {
            take = 1 + c(nums, i + 1, i, dp);
        }

        return dp[i][j + 1] = max(take, notTake);
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> dp(n, vector<int>(n + 1, -1));

        return c(nums, 0, -1, dp);
    }
};