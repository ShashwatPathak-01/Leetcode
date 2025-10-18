class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<int>st;
        int val=INT_MIN;
        for(int num:nums){
            int min_num=num-k;
            int max_num=num+k;
            int val1=max(min_num,val+1);
            if(val1<=max_num){
                st.insert(val1);
                val=val1;
            }
        }
        return st.size();
    }
};