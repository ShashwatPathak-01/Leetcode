class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int countOnes=count(nums.begin(),nums.end(),1);
        if(countOnes>0)
        return n-countOnes;
        int min_ops=INT_MAX;
        for(int i=0;i<n;i++){
            int val=nums[i];
            for(int j=i+1;j<n;j++){
                val=gcd(val,nums[j]);
                if(val==1){
                    min_ops=min(min_ops,j-i);
                    break;
                }
            }
        }
        if(min_ops==INT_MAX)
        return -1;
        return min_ops+(n-1);
    }
};