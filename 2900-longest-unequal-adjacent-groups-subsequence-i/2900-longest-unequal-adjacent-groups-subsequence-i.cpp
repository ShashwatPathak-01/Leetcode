class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>ans;
        if(groups.empty())
        return ans;
        ans.push_back(words[0]);
        int lastCount=groups[0];
        for(int i=1;i<words.size();i++){
            if(groups[i]!=lastCount){
                ans.push_back(words[i]);
                lastCount=groups[i];
            }
        }
        return ans;
    }
};