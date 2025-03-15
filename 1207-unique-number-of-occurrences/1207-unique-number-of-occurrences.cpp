class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>v;
        map<int,int>m;
        int k=1;
        for(int i=0;i<arr.size();i++)
        {
            if(m.find(arr[i])!=m.end())
            m[arr[i]]++;
            else
            m.insert(make_pair(arr[i],k));
        }
        for(auto c:m)
        {
            v.push_back(c.second);
        }
        for(int i=0;i<v.size()-1;i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(v[i]==v[j])
                return false;
            }
        }
        return true;
    }
};