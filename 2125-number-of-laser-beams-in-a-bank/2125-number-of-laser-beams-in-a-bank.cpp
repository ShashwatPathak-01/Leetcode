class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int count = 0;
        int idx = 0; // previous non-empty row
        
        // Find the first non-empty row
        while (idx < n && countOnes(bank[idx]) == 0)
            idx++;
        
        while (idx < n) {
            int next = idx + 1;
            // Find next non-empty row
            while (next < n && countOnes(bank[next]) == 0)
                next++;
            
            if (next == n) break; // no more valid rows
            
            count += countOnes(bank[idx]) * countOnes(bank[next]);
            idx = next; // move to next non-empty row
        }
        
        return count;
    }

private:
    int countOnes(const string& s) {
        int cnt = 0;
        for (char c : s)
            if (c == '1') cnt++;
        return cnt;
    }
};
