class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
        int currSum = 0;
        int maxSum = INT_MIN;
        int sum = 0;
        for (int i : nums) {
            currSum = max(currSum + i, i);
            maxSum = max(currSum, maxSum);
        }
        return maxSum;
    }
};
    
