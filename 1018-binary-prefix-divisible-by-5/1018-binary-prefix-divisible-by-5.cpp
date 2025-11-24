class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> answer;
        int rem = 0;   // remainder

        for (int bit : nums) {
            rem = (rem * 2 + bit) % 5;
            answer.push_back(rem == 0);
        }

        return answer;
    }
};
