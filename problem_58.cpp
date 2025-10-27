class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss;
        ss<<s;
        string ans;
        int ans_len; 
        while(ss>>ans){
            ans_len=ans.length();
        }
        return ans_len;
    }
};
