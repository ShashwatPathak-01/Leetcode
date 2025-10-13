class Solution {
public:

    void mergeArr(vector<int>&ver, int left,int right,int mid,int& count){
        int low=left;
        int high=mid+1;
        vector<int>temp;
        int j = mid + 1;
        for (int i = left; i <= mid; i++) {
            while (j <= right && (long long)ver[i] > 2LL * ver[j])
                j++;
            count += (j - (mid + 1));
        }
        while(low<=mid && high<=right){
            if(ver[low]<=ver[high]){
                temp.push_back(ver[low]);
                low++;
            }
            else{
                temp.push_back(ver[high]);
                high++;
            }
        }
        while(low<=mid){
            temp.push_back(ver[low]);
            low++;
        }
        while(high<=right){
            temp.push_back(ver[high]);
            high++;
        }
        int m=0;
        for(int i=left;i<=right;i++){
            ver[i]=temp[m++];
        }
    }

    void mergeAlgo(vector<int>&ver,int left,int right,int& count){
        if(left>=right)
        return;
        int mid=(left+right)/2;
        mergeAlgo(ver,left,mid,count);
        mergeAlgo(ver,mid+1,right,count);
        mergeArr(ver,left,right,mid,count);
    }

    int reversePairs(vector<int>& nums) {
        int x=nums[nums.size()-1];
        int count=0;
        int left=0;
        int right=nums.size()-1;
        mergeAlgo(nums,left,right,count);
        return count;
    }
};