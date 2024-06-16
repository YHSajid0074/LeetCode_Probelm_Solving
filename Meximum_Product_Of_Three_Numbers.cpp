class Solution {
public:
    int maximumProduct(vector<int>& nums) {
     
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        

        int maxProduct1 = nums[n-1] * nums[n-2] * nums[n-3];
        int maxProduct2 = nums[0] * nums[1] * nums[n-1];
        
   
        return max(maxProduct1, maxProduct2);
    }
};
