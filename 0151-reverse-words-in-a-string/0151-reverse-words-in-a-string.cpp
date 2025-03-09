class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        vector<string>v;
        string st="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' '&& st=="")
            continue;
            if(s[i]!=' ')
            st+=s[i];
            else if(s[i]==' ')
            {
                v.push_back(st);
                st="";
            }
        }
        reverse(v.begin(),v.end());
        string str="";
        for(int i=0;i<v.size();i++)
        {
            str+=v[i];
            if(i!=v.size()-1)
            str+=" ";
        }
        return str;
    }
};