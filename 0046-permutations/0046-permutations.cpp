class Solution {
public:
    void find_permutation(vector<int>& nums, vector<int>& ver,vector<vector<int>>& answer,vector<bool>& freq){
        if(ver.size()==nums.size()){
            answer.push_back(ver);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                freq[i]=true;
                ver.push_back(nums[i]);
                find_permutation(nums,ver,answer,freq);
                ver.pop_back();
                freq[i]=false;
            }
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>answer;
        vector<int>ver;
        vector<bool>freq(nums.size(),false);
        find_permutation(nums,ver,answer,freq);
        return answer;
    }
};