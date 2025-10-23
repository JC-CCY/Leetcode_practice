class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        else{
            int min_first=(strs[0].length()<strs[1].length())? strs[0].length():strs[1].length();
            string ans_temp="";
            for(int i=0;i<min_first;i++){
                if(strs[0][i]==strs[1][i]) ans_temp+=strs[0][i];
                else break;
            }
            if(ans_temp=="") return ans_temp;
            else{
                string ans;
                for(int j=2;j<strs.size();j++){
                    int min_second=(strs[j].length()<ans_temp.length())? strs[j].length():ans_temp.length();
                    for(int k=0;k<min_second;k++){
                        if(ans_temp[k]==strs[j][k]) ans+=ans_temp[k];
                        else break;
                    }
                    if(ans=="") return ans;
                    else{
                        ans_temp=ans;
                        ans="";
                        continue;
                    }
                }
                return ans_temp;
            }
        }
    }
};
