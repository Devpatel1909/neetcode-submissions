class Solution {
   public:
    string ans;
    void palindrom(string s, int l, int r) {
        
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            l--;
            r++;
        }
        l++;
        r--;
        string part = s.substr(l, r - l + 1);
        if (part.size() > ans.size()) ans = part;
    }
    string longestPalindrome(string s) {
        if(s.size()==1){
            return s;
        }
        for (int i = 0; i < s.size(); i++) {
            palindrom(s, i, i);
            palindrom(s, i, i + 1);
        }
        return ans;
    }
};
