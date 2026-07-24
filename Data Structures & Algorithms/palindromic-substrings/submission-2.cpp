class Solution {
   public:
    int ans = 0;
    void count(string s,int l,int r){
        while( l>=0 && r<s.size() && s[l]==s[r] ){
            ans++;
            l--;
            r++;
        }
    }
    int countSubstrings(string s) {
        for (int i = 0; i < s.size(); i++) {
            count(s,i,i);
            count(s,i,i+1);
        }
        return ans;
    }
};
