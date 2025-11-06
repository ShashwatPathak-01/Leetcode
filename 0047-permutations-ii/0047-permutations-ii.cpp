class Solution {
public:
    void find_permutation(vector<int>& nums,vector<bool>& freq,vector<int>& temp,vector<vector<int>>& answer){
        if(temp.size()==nums.size()){
            answer.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){

            if(freq[i])
            continue;

            if(i > 0 && nums[i] == nums[i-1] && !freq[i-1]) 
            continue;

            freq[i]=true;
            temp.push_back(nums[i]);
            find_permutation(nums,freq,temp,answer);
            temp.pop_back();
            freq[i]=false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>answer;
        vector<bool>freq(nums.size(),false);
        vector<int>temp;
        find_permutation(nums,freq,temp,answer);
        return answer;
    }
};