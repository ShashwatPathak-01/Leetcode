class Solution {
public:

    bool setbit(int num){
        if ((num & (num + 1)) == 0)
        return true;
        return false;
    }
    int smallestNumber(int n) {
        int num=n;
        while(true){
            bool ans=setbit(num);
            if(ans)
            return num;
            num++;
        }
        return 0;
    }
};