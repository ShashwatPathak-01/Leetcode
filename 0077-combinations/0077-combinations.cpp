class Solution {
public:
    void find_combinations(int idx,vector<vector<int>>& answer,vector<int> &value,vector<int>& temp,int k){
        if(temp.size()==k){
            answer.push_back(temp);
            return;
        }
        for(int i=idx;i<value.size();i++){
            temp.push_back(value[i]);
            find_combinations(i+1,answer,value,temp,k);
            temp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>answer;
        vector<int>value;
        for(int i=0;i<n;i++){
            value.push_back(i+1);
        }
        vector<int>temp;
        find_combinations(0,answer,value,temp,k);
        return answer;
    }
};