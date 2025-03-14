class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int x=0;
        for(int i=0;i<gain.size();i++)
        {
            sum+=gain[i];
            if(sum>x)
            x=sum;
        }
        return x;
    }
};