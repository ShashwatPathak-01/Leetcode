class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>v;
        int a=1;
        map<int,int>m;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end())
            m[nums[i]]++;
            else
            m.insert(make_pair(nums[i],a));
        }
        for(auto i:m){
            if(i.second>1)
            v.push_back(i.first);
        }
        return v;
    }
};