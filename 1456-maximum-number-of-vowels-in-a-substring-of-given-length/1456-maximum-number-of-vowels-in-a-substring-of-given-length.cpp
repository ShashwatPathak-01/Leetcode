class Solution {
public:
    int maxVowels(string s, int k) {
       unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int maxVowelCount = 0;
    int currentVowelCount = 0;

    // Initialize the first window
    for (int i = 0; i < k; ++i) {
        if (vowels.count(s[i])) {
            currentVowelCount++;
        }
    }

    maxVowelCount = currentVowelCount;

    // Slide the window
    for (int i = k; i < s.size(); i++) {
        if (vowels.count(s[i])) {
            currentVowelCount++;
        }
        if (vowels.count(s[i - k])) {
            currentVowelCount--;
        }
        maxVowelCount = std::max(maxVowelCount, currentVowelCount);
    }

    return maxVowelCount;
    }
};