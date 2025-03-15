class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ver;
        vector<int>ver1;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++)
        {
            if(i!=0&&nums1[i]==nums1[i-1])
            continue;
            int c=0;
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]!=nums2[j])
                c++;
            }
            if(c==nums2.size())
            ver.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            int c=0;
            if(i!=0&&nums2[i]==nums2[i-1])
            continue;
            for(int j=0;j<nums1.size();j++)
            {
                if(nums2[i]!=nums1[j])
                c++;
            }
            if(c==nums1.size())
            ver1.push_back(nums2[i]);
        }
        vector<vector<int>>v={ver,ver1};
        return v;
    }
};