class Solution {
public:
    bool hasSameDigits(string s) {
        if(s.size()<2)
        return false;
        while(s.size()>2){
            string str="";
            for(int i=0;i<s.size()-1;i++){
                int sum=((s[i]-'0')+(s[i+1]-'0'))%10;
                str+=to_string(sum);
            }
            s=str;
        }
        if(s.size()==2){
            if(s[0]==s[1])
            return true;
            else
            return false;
        }
        return false;
    }
};