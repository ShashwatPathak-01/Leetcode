class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        for(int i=0;i<candies.size();i++)
        {
            int x=0;
            int sum=candies[i]+extraCandies;
            for(auto num:candies)
            {
                if(num>sum)
                x++;
            }
            if(x==0)
            v.push_back(true);
            else
            v.push_back(false);
        }
        return v;
    }
};