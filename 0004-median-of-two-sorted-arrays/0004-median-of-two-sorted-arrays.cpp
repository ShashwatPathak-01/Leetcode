class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        double median=0.0;
        int sz=nums1.size();
        int x=sz/2;
        if(sz%2==0){
            median=(nums1[x-1]+nums1[x])/2.0;
        }
        else{
            median=(nums1[x]);
        }
        return median;
    }
};