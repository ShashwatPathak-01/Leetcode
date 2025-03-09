class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>answer1;
        vector<int>answer2;
       int pre=1;
       for(int i=0;i<nums.size();i++){
        answer1.push_back(pre);
        pre*=nums[i];
       }
       int post=1;
       for(int i=nums.size()-1;i>=0;i--){
        answer2.push_back(post);
        post*=nums[i];
       }
       reverse(answer2.begin(),answer2.end());
       vector<int>ans;
       for(int i=0;i<nums.size();i++){
            ans.push_back(answer1[i]*answer2[i]);
       }
        return ans;
    }
};