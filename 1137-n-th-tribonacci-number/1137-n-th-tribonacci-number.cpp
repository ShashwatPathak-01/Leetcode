class Solution {
public:
    int tribonacci(int n) {
        if(n<=1)
        return n;
        int t1=0,t2=1,t3=1;
        if(n==2)
        return t1+t2;
        if(n==3)
        return t1+t2+t3;
        int sum=0;
        for(int i=0;i<n-2;i++)
        {
            int temp=t1+t2+t3;
            sum=temp;
            t1=t2;
            t2=t3;
            t3=temp;
        }
        return sum;
    }
};