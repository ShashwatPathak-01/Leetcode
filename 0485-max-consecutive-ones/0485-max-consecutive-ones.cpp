class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;int x=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            x++;
            else if(nums[i]==0)
            {
                if(c<x)
                {
                    c=x;
                    x=0;
                }
                else
                x=0;
            }
        }
        if(c<x)
        c=x;
        return c;
    }
};