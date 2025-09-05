class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};
        vector<string> ans{""};
        const vector<string> digitToLetters{"", "", "abc", "def", "ghi",
                                            "jkl", "mno", "pqrs", "tuv", "wxyz"};
        for (char d : digits) {
            vector<string> temp;
            for (const string& s : ans)
                for (char c : digitToLetters[d - '0'])
                    temp.push_back(s + c);
            ans = move(temp);
        }
        return ans;
    }
};
