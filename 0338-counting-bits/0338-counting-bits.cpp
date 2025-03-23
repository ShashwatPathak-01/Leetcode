class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        v.push_back(0);
        for(int i=1;i<=n;i++)
        {
            v.push_back(calculate(i));
        }
        return v;
    }
    int calculate(int i)
    {
        int sum=0;
        while(i>0)
        {
            int x=i%2;
            sum+=x;
            i=i/2;
        }
        return sum;
    }
};