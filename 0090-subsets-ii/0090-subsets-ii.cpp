class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>answer;
        vector<int>temp;
        calc(0,nums,temp,answer);
        return answer;
    }
    void calc(int idx,vector<int>& nums,vector<int>& temp,vector<vector<int>>& answer){
        answer.push_back(temp);
        
        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1])
            continue;
            temp.push_back(nums[i]);
            calc(i+1,nums,temp,answer);
            temp.pop_back();
        }
    }
};