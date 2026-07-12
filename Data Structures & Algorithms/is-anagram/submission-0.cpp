class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> first;

        for(char i:s){
            first[i]++;
        }
        for(char i:t){
            first[i]--;
        }
        
        for(auto& x:first){
            if(x.second!=0){
                return false;
            }
        }
        return true;
    }
};
