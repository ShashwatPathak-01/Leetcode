class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        int count=0;
        int prefixSum=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            int sub=prefixSum-k;
            count+=mp[sub];
            mp[prefixSum]+=1;
        }
        return count;
    }
};