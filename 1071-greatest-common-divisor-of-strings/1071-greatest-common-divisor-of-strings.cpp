class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int l1=str1.size();
        int l2=str2.size();
        if(l1<l2)
        return gcdOfStrings(str2,str1);
        int x=gcd(size(str1),size(str2));
        if(str1+str2==str2+str1)
        return str1.substr(0,x);
        else
        return "";
    }
};