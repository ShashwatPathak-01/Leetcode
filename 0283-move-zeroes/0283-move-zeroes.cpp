class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        stable_partition(nums.begin(),nums.end(),[](int num){return (num>0||num<0);});
        for(int i=0;i<nums.size();i++)
        cout<<nums[i];
    }
};