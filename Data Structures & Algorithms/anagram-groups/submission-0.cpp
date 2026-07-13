class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        int freq[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) return false;
        }

        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> count;
       vector<vector<string>> ans;
       for(string s : strs){
            string dummy=s;
            sort(dummy.begin(),dummy.end());
            count[dummy].push_back(s);
       }

       for(auto &x: count){
            ans.push_back(x.second);
       }
       return ans;
    }
};
