class Solution {
public:
    bool find_num(int x){
        vector<int>ver(10,0);
        int num=x;
        while(num>0){
            ver[num%10]++;
            num/=10;
        }
        if(ver[0]>0)
        return false;
        for(int i=1;i<10;i++){
            if(ver[i]!=i && ver[i]>0)
            return false;
        }
        return true;
    }
    int nextBeautifulNumber(int n) {
        int x=n+1;
        while(true){
            if(find_num(x))
            return x;
            x++;
        }
        return 0;
    }
};