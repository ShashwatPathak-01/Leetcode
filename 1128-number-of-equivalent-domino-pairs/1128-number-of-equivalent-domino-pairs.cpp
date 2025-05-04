class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count=0;
        map<int,int>mp;
        for(auto & d:dominoes){
            int key=d[0]<d[1]?d[0]*10+d[1]:d[1]*10+d[0];
            count+=mp[key];
            mp[key]++;
        }
        return count;
    }
};