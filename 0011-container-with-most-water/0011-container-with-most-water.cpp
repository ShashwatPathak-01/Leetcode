class Solution {
public:
    int maxArea(vector<int>& height) {
        int pre=0;
        int n=height.size()-1;
        int suff=height.size()-1;
        int area=0;
        for(int i=0;i<height.size();i++)
        {
            if(height[pre]<=height[suff])
            {
                int x=height[pre]*n;
                area=max(area,x);
                pre++;
                n--;
            }
            else
            {
                int x=height[suff]*n;
                area=max(area,x);
                suff--;
                n--;
            }
        }
        return area;
    }
};