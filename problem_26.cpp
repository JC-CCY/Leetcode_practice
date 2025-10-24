class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        vector<int> temp = nums;
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[i-1]){
                temp[count] = nums[i];
                count++;
            } 
        }
        nums = temp;
        return count;
    }
};
