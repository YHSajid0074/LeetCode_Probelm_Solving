class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int f=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+f);
        reverse(nums.begin()+f,nums.end());
    }
};