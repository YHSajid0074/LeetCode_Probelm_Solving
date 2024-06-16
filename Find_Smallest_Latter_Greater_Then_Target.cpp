class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char y) {
        set<char> s;
        for(auto x : letters) {
            s.insert(x);
        }
        char f=letters[0];
        int flag=1;
        for(int i=0;i<letters.size();i++){
            if(letters[i]>y){
     f=letters[i];
     flag=0;
     break;
            }
        }
        return f;
            
    }
};