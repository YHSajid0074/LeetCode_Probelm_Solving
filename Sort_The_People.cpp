class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i=0;i<names.size()-1;i++){
            for(int j=i+1;j<names.size();j++){
                if(heights[i]<heights[j]){
                    int temp=heights[i];
                    string temp1=names[i];
                    heights[i]=heights[j];
                    names[i]=names[j];
                    names[j]=temp1;
                    heights[j]=temp;
                }
            }
        }
        return names;
    }
};