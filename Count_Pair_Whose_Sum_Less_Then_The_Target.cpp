class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(i!=j ){
                    int k=nums[i]+nums[j];
                    if(k<target){
                        count++;
                    }
                }
            }
        }
        return count;
    }

};