class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int k = nums.size() / 3;
        vector<int> majorityElement1;
        unordered_set<int> seen;

        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            if (count > k && seen.find(nums[i]) == seen.end()) {
                majorityElement1.push_back(nums[i]);
                seen.insert(nums[i]);
            }
        }

        return majorityElement1;
    }
};
