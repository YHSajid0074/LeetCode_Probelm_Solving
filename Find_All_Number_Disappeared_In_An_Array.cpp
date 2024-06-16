class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>vec;
        set<int>st;
        int n = nums.size();
        for(int i=0;i<n;i++)st.insert(nums[i]);

        for(int i=1;i<=n;i++){
            if(st.find(i) == st.end()){
                vec.push_back(i);
            }
        }
        return vec;
    }
};