class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>v1;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++)
        {
            int x=potions.size()-func(potions,spells[i],success);
            v1.push_back(x);
        }
        return v1;
    }
    private:
    int func(vector<int>& potions,int spell,long long success)
    {
        int l=0;
        int h=potions.size();
        while(l<h)
        {
            const int m=(l+h)/2;
            if(static_cast<long>(spell)*potions[m]>=success)
            h=m;
            else
            l=m+1;
        }
        return l;
    }
};

