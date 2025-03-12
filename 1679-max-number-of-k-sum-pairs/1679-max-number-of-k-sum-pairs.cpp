class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int c=0;
        int pre=0;
        int suff=nums.size()-1;
         while(pre<suff)
        {
            int x=nums[pre]+nums[suff];
                if(x==k)
                {
                    c++;
                    pre++;
                    suff--;
                }
                else if(x<k)
                pre++;
                else 
                suff--;
        }
        return c;
    }
};