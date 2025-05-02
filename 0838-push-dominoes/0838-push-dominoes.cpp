class Solution {
public:
    string pushDominoes(string dominoes) {
        // Add virtual guards to simplify edge handling
        string s = "L" + dominoes + "R";  // Adding dummy characters for edge cases
        string result = "";
        int i = 0;

        for (int j = 1; j < s.size(); ++j) {
            if (s[j] == '.') continue;  // Skip until we encounter a force ('L' or 'R')

            int middle = j - i - 1;  // Calculate the distance between current forces

            if (i > 0) result += s[i];  // Append the force from previous section (not the first dummy 'L')

            if (s[i] == s[j]) {
                // Both forces are the same (either 'R...R' or 'L...L')
                result += string(middle, s[i]);  // Fill the space with that force
            } else if (s[i] == 'L' && s[j] == 'R') {
                // L...R forces balance each other, so fill with '.'
                result += string(middle, '.');
            } else {
                // R...L forces are opposite, so fill in halves with 'R' and 'L'
                int half = middle / 2;
                result += string(half, 'R');  // First half 'R'
                if (middle % 2 == 1) result += '.';  // Middle gets a dot if odd
                result += string(half, 'L');  // Second half 'L'
            }

            i = j;  // Move to the next section
        }

        return result;  // Return the final state
    }
};
