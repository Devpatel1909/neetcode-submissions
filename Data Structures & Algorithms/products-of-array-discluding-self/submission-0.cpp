class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero = 0;
        int num = 1;
        for (int i : nums) {
            if (i == 0) {
                zero++;
                continue;
            }
            num = num * i;
        }
        if(zero>1){
            vector<int> ans(nums.size(),0);
            return ans;
        }
        for (int i = 0; i < nums.size(); i++) {
                if(zero>0 && nums[i]!=0){
                    nums[i]=0;
                }else if(zero>0 && nums[i]==0){
                    nums[i]=num;
                }else{
                nums[i]=num/nums[i];
                }
        }
        return nums;
    }
};

