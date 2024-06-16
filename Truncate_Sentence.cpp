class Solution {
public:
    string truncateSentence(string s, int k) {
        string c="";
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                count++;
            }
if(count<k){
c+=s[i];
}
        }
        return c;
    }
};