class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,prefix=0;
        for(int i=0;i<nums.size();i++)
        sum+=nums[i];
        for(int i=0;i<nums.size();i++)
        {
            if(prefix==sum-prefix-nums[i])
            return i;
            prefix+=nums[i];
        }
        return -1;
    }
};