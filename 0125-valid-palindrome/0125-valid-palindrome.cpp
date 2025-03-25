class Solution {
public:
    bool isPalindrome(string s) {
        int a=0,l=s.size()-1;
    while(a<l)
    {
        if(!isalnum(s[a]))
        a++;
        else if(!isalnum(s[l]))
        l--;
        else if(tolower(s[a])!=tolower(s[l]))
        return false;
        else{
            a++;
            l--;
        }
    }
    return true;
    }
};