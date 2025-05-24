class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
         int n=words.size();
        vector<int>v;
        
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(char ch:words[i])
            {
                if(ch==x)
                 c++;
            }
            if(c>0)
            {
                v.push_back(i);
                c=0;
            }
            else
            c=0;
        }
        return v;
    }
};