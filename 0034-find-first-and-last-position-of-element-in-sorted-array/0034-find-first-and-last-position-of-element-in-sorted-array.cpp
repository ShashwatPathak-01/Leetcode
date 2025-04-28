class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        vector<int>v={-1,-1};
        while(i<=j){
            if(nums[i]==target && nums[j]==target){
                v[0]=i;
                v[1]=j;
                break;
            }
            if(nums[i]!=target)       
            i++;
            if(nums[j]!=target)
            j--;
        }
        return v;
    }
};