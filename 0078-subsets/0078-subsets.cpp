class Solution {
public:
    void find_subset(int idx,vector<int>& nums,vector<int>& temp,vector<vector<int>>& answer){
        if(idx==nums.size()){
            answer.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        find_subset(idx+1,nums,temp,answer);
        temp.pop_back();
        find_subset(idx+1,nums,temp,answer);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>answer;
        vector<int>temp;
        find_subset(0,nums,temp,answer);
        return answer;
    }
};