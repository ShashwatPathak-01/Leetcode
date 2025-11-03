class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int sum=0;
        for(int i=0;i<colors.size()-1;i++){
            if(colors[i]==colors[i+1]){
                sum+=min(neededTime[i],neededTime[i+1]);
                neededTime[i+1] = max(neededTime[i], neededTime[i+1]);
            }
            else
            continue;
        }
        return sum;
    }
};