class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size()<2)
        {
            double x=nums[0]/k;
            return x;
        }
        double sum=0;
        double j=accumulate(nums.begin(),nums.begin()+k,0);
        sum=j;
        for(int i=k;i<nums.size();i++)
        {
            j+=nums[i]-nums[i-k];
            sum=max(sum,j);
        }
        return sum/k;
    }
};