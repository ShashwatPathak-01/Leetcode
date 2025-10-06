class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()<2)
        return nums[0];
        std::map<int ,int>m;
        int c=1;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end())
            m[nums[i]]++;
            else
        m.insert(make_pair(nums[i],c));
        }
        double n=ceil(nums.size()/2);
        int num=0;
        for(auto i:m)
        {
            if(i.second>n)
            num=i.first;
        }
        return num;
    }
};