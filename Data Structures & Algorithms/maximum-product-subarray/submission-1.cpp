class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0];
        int minProd = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] < 0){
                cout<<"swap "<<endl;
                swap(maxProd, minProd);
                }
            maxProd = max(nums[i], nums[i] * maxProd);
            minProd = min(nums[i], nums[i] * minProd);
            cout<<maxProd<<" "<<minProd <<endl;
            ans = max(ans, maxProd);
        }

        return ans;
    }
};

