

class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.length() - 1; i >= 0; i--) {  // Loop from end to start
            char ch = num[i];
            if ((ch - '0') % 2 != 0) {  // Check if odd
                return num.substr(0, i + 1);  // Length = i+1
            }
        }
        return "";  // If no odd number found
    }
};
