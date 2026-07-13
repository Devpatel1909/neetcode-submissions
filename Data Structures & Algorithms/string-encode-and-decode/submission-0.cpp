class Solution {
public:

    string encode(vector<string>& strs) {
        string en="";

        for(string s:strs){
            en+=s;
            en += '\0';
        }
         
        return en;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string str;
        for(int i=0;i<s.size();i++){
            if(s[i]=='\0'){
                ans.push_back(str);
                str="";
            }else{
                str+=s[i];
            }
        }
        return ans;
    }
};
