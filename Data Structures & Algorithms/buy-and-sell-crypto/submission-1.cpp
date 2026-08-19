class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxI=0;
        int curr_max=INT_MIN;
        int curr_min=INT_MAX;

        for(int i=0;i<prices.size();i++){
            if(curr_min>prices[i]){
                curr_min=prices[i];
                curr_max=INT_MIN;
            }
            if(prices[i]>curr_max){
                curr_max=prices[i];
                maxI=max(maxI,curr_max-curr_min);
            }
        }
    return maxI;
    }
};
