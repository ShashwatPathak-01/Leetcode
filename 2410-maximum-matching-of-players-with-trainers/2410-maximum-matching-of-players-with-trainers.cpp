class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int count=0;
        int p_left=0,t_left=0;
        while(p_left!=players.size() && t_left!=trainers.size()){
            if(players[p_left]<=trainers[t_left]){
                count++;
                p_left++;
                t_left++;
            }
            else{
                t_left++;
            }
        }
        return count;
    }
};