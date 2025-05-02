class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        map<int,int>mp;
        vector<int>v(intervals.size(),-1);
        for(int i=0;i<intervals.size();i++){
            mp.insert({intervals[i][0],i});
        }
        for(int i=0;i<intervals.size();i++){
            int n=intervals[i][1];
            auto rnd=mp.lower_bound(n);
            if(rnd!=mp.end()){
                v[i]=rnd->second;
            }
        }
        return v;
    }
};