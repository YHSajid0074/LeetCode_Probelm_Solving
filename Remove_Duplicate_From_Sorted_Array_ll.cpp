class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for (int i = 0; i < nums.size(); ++i) {
            int count = 0; 
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] == nums[j]) {
                    count++;
                    if (count >= 2) { 
                        break;
                    }
                }
            }

            if (count < 2) {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};

