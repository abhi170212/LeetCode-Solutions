class Solution {
public:
    bool detectCapitalUse(string word) {
        int capitalCount = 0;
        for (int i = 0; i <=word.size(); i++) {
            if (isupper(word[i])) {
                capitalCount++;
            }
        }

        // sab capital hai
        if (capitalCount == word.size())
            return true;

        // ye sab small wala case ho gya
        if (capitalCount == 0)
            return true;

        // ab sirf pahla wala capital ho uska logic <-- phle letter ko word[0] se bhi le sakte hai ( array wala rule hai vroo)
        if (capitalCount == 1 && isupper(word[0]))
            return true;

        // baki ke sare cases me false return krna hai 
    return false;
    }
};