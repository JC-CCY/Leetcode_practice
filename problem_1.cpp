class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ans1=-1,ans2=-1;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans1=i;
                    ans2=j;
                }
                if(ans1!=-1) break;
            }
            if(ans1!=-1) break;
        }
        vector<int> ans={ans1,ans2};
        return ans;
    }
};
