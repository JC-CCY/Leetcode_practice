class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int v_end=digits.size()-1;
        int flag=0;
        for(int i=v_end;i>=0;i--){
            int num=(i==v_end)? digits[i]+1:digits[i];
            int inp=num+flag;
            ans.insert(ans.begin(),inp%10);
            if(inp/10!=0) flag=1;
            else flag=0;
        }
        if(flag==1) ans.insert(ans.begin(),1);
        return ans;
    }
};
