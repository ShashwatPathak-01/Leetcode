class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int>pos;
        // vector<int>neg;

        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>0)
        //     pos.push_back(nums[i]);
        //     else
        //     neg.push_back(nums[i]);
        // }

        // for(int i=0,j=0;i<nums.size();i+=2,j++){
        //     nums[i]=pos[j];
        //     nums[i+1]=neg[j];
        // }

        vector<int>ans(nums.size());
        int pos=0;
        int neg=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[pos]=nums[i];
                pos+=2;
            }else{
                ans[neg]=nums[i];
                neg+=2;
            }
        }

        return ans;

    }
};