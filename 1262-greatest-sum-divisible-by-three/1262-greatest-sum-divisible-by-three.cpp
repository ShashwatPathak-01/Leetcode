class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        const int NEG_INF = -1e9;  // sufficiently small
        vector<int> dp(3, NEG_INF);
        dp[0] = 0;

        for (int x : nums) {
            vector<int> cur(dp);  // copy current dp
            for (int r = 0; r < 3; ++r) {
                if (dp[r] == NEG_INF) continue;
                int nr = (r + x) % 3;
                cur[nr] = max(cur[nr], dp[r] + x);
            }
            dp.swap(cur);
        }

        return dp[0];  // max sum divisible by 3
    }
};
