class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];
        int x=0;
        map<int ,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end())
            m[nums[i]]++;
            else
            m.insert(make_pair(nums[i],1));
        }
        for(auto pair:m)
        {
            if(pair.second<2)
             x=pair.first;
        }
        return x;
    }
};