class Solution {
public:
int take=INT_MAX;
int not_take=INT_MAX;
    int calculate(vector<int>& coins,int amount,int i,int count){
        if(amount == 0){
            return count;
        }else if(amount<0 || i>=coins.size()){
            // cout<<"i"<<amount;
            return INT_MAX;
        }
         take=min(take,calculate(coins,amount-coins[i],i,count+1));
         not_take=min(not_take,calculate(coins,amount,i+1,count));
        return min(take,not_take);
    }
    int coinChange(vector<int>& coins, int amount) {
        int ans=calculate(coins,amount,0,0);
        return ans==INT_MAX?-1:ans;
    }
};
