class Solution {
public:
    int findMin(vector<int>& nums) {
         auto it = min_element(nums.begin(), nums.end());
        return *it;
        
    }
};