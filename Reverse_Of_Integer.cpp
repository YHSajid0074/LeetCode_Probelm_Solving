
class Solution {
public:
    int reverse(int x) {
        long long rev = 0; 
        while (x != 0) {
            int rem = x % 10;
            x = x / 10;
            rev = rev * 10 + rem;
        }
        string stringValue = to_string(rev); 
        int intValue;
        try {
            intValue = stoi(stringValue); 
        } catch (const out_of_range& e) { 
            intValue = 0; 
        }
        return intValue;
    }
};
