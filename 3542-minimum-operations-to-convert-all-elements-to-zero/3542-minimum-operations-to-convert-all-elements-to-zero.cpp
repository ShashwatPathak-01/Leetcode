class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ops = 0;
        vector<int> st;

        for (int x : nums) {
            if (x == 0) {
                st.clear();
                continue;
            }

            while (!st.empty() && st.back() > x) {
                st.pop_back();
            }

            if (st.empty() || st.back() < x) {
                ops++;
                st.push_back(x);
            }
        }

        return ops;
    }
};
