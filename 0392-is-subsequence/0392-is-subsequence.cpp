class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="")
        return true;
        int j=0;
        for(int i=0;i<t.size();i++)
        {
            if(s[j]==t[i])
            j++;
            else
            continue;

        }
        if(j==s.size())
        return true;
        else
        return false;
    }
};