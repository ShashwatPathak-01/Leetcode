class Solution {
public:
    void find_array(int i,vector<int>& candidates,vector<vector<int>>& ver,vector<int>& temp,int target){
        if(target==0){
            ver.push_back(temp);
            return;
        }
        if(i>=candidates.size() || target<0)
        return;
        temp.push_back(candidates[i]);
        find_array(i,candidates,ver,temp,target-candidates[i]);
        temp.pop_back();
        find_array(i+1,candidates,ver,temp,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ver;
        vector<int>temp;
        find_array(0,candidates,ver,temp,target);
        return ver;
    }
};