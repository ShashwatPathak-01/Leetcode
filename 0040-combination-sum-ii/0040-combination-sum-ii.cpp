class Solution {
public:
    void find_array(int start, vector<int>& candidates, int target, vector<int>& temp, vector<vector<int>>& res) {
        if (target == 0) {
            res.push_back(temp);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            // Skip duplicates
            if (i > start && candidates[i] == candidates[i - 1]) continue;
            if (candidates[i] > target) break;  // Optimization

            temp.push_back(candidates[i]);
            find_array(i + 1, candidates, target - candidates[i], temp, res);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> temp;
        find_array(0, candidates, target, temp, res);
        return res;
    }
};
