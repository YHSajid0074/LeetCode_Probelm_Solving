class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1;
        int last=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target && first==-1){
                first=i;
            }  if(nums[i]==target && first!=-1){
                last=i;
            }
        }
        vector<int>v;
        v.push_back(first);
        v.push_back(last);
        return v;
    }
};