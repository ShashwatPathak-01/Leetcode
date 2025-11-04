#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> answer;

        for (int i = 0; i <= n - k; i++) {
            vector<int> sub(nums.begin() + i, nums.begin() + i + k);

            unordered_map<int, int> freq;
            for (int num : sub) freq[num]++;

            vector<pair<int, int>> vec;
            for (auto &p : freq)
                vec.push_back({p.second, p.first}); // {frequency, number}

            sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
                if (a.first == b.first)
                    return a.second > b.second; // larger number wins on tie
                return a.first > b.first; // higher frequency first
            });

            int sum = 0;
            if (vec.size() <= x) {
                sum = accumulate(sub.begin(), sub.end(), 0);
            } else {
                unordered_set<int> topX;
                for (int i = 0; i < x; i++)
                    topX.insert(vec[i].second);

                for (int num : sub)
                    if (topX.count(num))
                        sum += num;
            }
            answer.push_back(sum);
        }

        return answer;
    }
};
