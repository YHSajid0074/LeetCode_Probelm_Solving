class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>c;
        for(int i=0;i<candyType.size();i++){
c.insert(candyType[i]);
        }
        int a=candyType.size()/2;
        int b=c.size();

        if(a<b){
            return a;
        }
        return b;
    }
};