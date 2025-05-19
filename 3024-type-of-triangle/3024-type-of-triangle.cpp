class Solution {
public:
    string triangleType(vector<int>& nums) {
        // Sort to make the inequality check simpler
        sort(nums.begin(), nums.end());

        // Triangle inequality check
        if (nums[0] + nums[1] <= nums[2]) 
            return "none";
        
        // Check for equilateral
        if (nums[0] == nums[1] && nums[1] == nums[2]) 
            return "equilateral";

        // Check for isosceles
        if (nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]) 
            return "isosceles";
        
        // Otherwise, it's scalene
        return "scalene";
    }
};
