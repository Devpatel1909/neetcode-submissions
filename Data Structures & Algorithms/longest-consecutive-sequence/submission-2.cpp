class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0;
        unordered_set<int> hs(nums.begin(), nums.end());

        for (int num : hs) {
            if (hs.find(num - 1) == hs.end()) {  // Start of a sequence
                int curr = num;
                int len = 1;

                while (hs.find(curr + 1) != hs.end()) {
                    curr++;
                    len++;
                }

                ans = max(ans, len);
            }
        }
        return ans;
    }
};
