class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int count=0;
         vector<bool> k;
        for(int i=0;i<candies.size();i++){

            if(candies[i]+extraCandies>=*max_element (candies.begin(), candies.end())){
               k.push_back(true);
            }else{
                k.push_back(false);
            }
        }
        return k;
      
    }
};