class Solution {
public:
    bool find_dplt(char c, string &str) {
        for (char ch : str) {
            if (ch == c)
                return true;
        }
        return false;
    }

    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        string longest = "";

        for (int i = 0; i < n; i++) {
            string current = "";
            for (int j = i; j < n; j++) {
                if (find_dplt(s[j], current)) {
                    break; // duplicate found
                } else {
                    current += s[j];
                    if (current.size() > longest.size())
                        longest = current;
                }
            }
        }
        return longest.size();
    }
};
