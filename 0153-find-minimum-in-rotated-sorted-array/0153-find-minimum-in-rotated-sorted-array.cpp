class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];
        int minNum=INT_MAX;
        int low=0,high=nums.size()-1;
        while(low<high){
            int mid=(low+high)/2;
            if(nums[mid]<nums[high]){
                minNum=min(minNum,nums[mid]);
                high=mid;
            }
            else{
                minNum=min(minNum,nums[high]);
                low=mid+1;
            }
        }
        return minNum;
    }
};