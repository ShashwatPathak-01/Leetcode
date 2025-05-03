class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
       for(int number:{tops[0],bottoms[0]}){
        int topMax=0,bottomMax=0;
        bool valid=true;
        for(int i=0;i<tops.size();i++){
            if(tops[i]!=number && bottoms[i]!=number){
                valid=false;
                break;
            }
            if(tops[i]!=number)
            topMax++;
            if(bottoms[i]!=number)
            bottomMax++;
        }
        if(valid){
            return min(topMax,bottomMax);
        }
       }
       return -1;
    }
};