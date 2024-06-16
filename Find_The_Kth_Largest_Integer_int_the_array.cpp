#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    static bool compare(const string& a, const string& b) {
        if (a.size() == b.size()) {
            return a < b;
        }
        return a.size() < b.size();
    }

    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), compare);
        int n = nums.size();
        return nums[n - k];
    }
};
