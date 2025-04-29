class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int max_ele=*max_element(nums.begin(),nums.end());
        int left=0,count=0;
        long long c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==max_ele)
            count++;

            while(count>=k){
                c+=(nums.size()-i);
                if(nums[left]==max_ele){
                    count--;
                }

                left++;
            }
        }
        return c;
    }
};