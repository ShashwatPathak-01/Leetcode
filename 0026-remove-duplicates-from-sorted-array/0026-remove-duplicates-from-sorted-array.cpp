class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        int k=0;
        for(auto i:nums)
        s.insert(i);
        nums.clear();
        for(auto i:s)
        {
            nums.push_back(i);
            k++;
        }
        return k;
    }
};