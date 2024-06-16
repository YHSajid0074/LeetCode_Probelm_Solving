class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>m;
        for(int i=0;i<nums.size();i++){
          m.push_back(abs((nums[i]*nums[i])));
        }

        sort(m.begin(),m.end());
        return m;
    }
};