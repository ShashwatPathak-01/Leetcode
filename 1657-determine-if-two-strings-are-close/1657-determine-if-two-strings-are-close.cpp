class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
        return false;
        map<char,int>m1;
        map<char,int>m2;
        vector<int>v1;
        vector<int>v2;
        vector<char>ver1;
        vector<char>ver2;
        int i=1;
        for(char ch:word1)
        {
            if(m1.find(ch)!=m1.end())
            m1[ch]++;
            else
            m1.insert(make_pair(ch,i));
        }
        for(char ch:word2)
        {
            if(m2.find(ch)!=m2.end())
            m2[ch]++;
            else
            m2.insert(make_pair(ch,i));
        }
        for(auto pair:m1){
            v1.push_back(pair.second);
            ver1.push_back(pair.first);
        }
        for(auto pair:m2){
            v2.push_back(pair.second);
            ver2.push_back(pair.first);
        }
        if(v1.size()!=v2.size()||ver1.size()!=ver2.size())
        return false;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i])
            return false;
        }
        for(int i=0;i<ver1.size();i++)
        {
            if(ver1[i]!=ver2[i])
            return false;
        }
        return true;
    }
};