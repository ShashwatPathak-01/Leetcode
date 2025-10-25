class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        int week=0;
        while(n>0){
            if(n>=7){
                sum+=((7*((1+week)+(7+week)))/2);
                n-=7;
            }
            else{
                sum+=(n*((1+week)+(n+week)))/2;
                n=0;
            }
            week++;
        }
        return sum;
    }
};