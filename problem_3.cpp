class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans_len=(s.length()==0)? 0:1;
        for(int i=0;i<s.length();i++){
            int len=1;
            string temp="";
            for(int k=i;k<i+len;k++){
                temp+=s[i];
            }
            for(int j=i+1;j<s.length();j++){
                int flag=0;
                for(int t=0;t<len;t++){
                    if(s[j]==temp[t]){
                        flag=1;
                        break;
                    } 
                }
                if(flag==0){
                    temp+=s[j];
                    len++;
                    if(j==s.length()-1 && ans_len<len) ans_len=len;
                } 
                else{
                    if(ans_len<len) ans_len=len;
                    break;
                } 
            }
        }
        return ans_len;
    }
};
