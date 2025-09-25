
           
class Solution {
public:
    bool isValid(string s) {
        string stack; 

        for (char& c : s) {
            if (c == '(')       stack.push_back(')');
            else if (c == '{')  stack.push_back('}');
            else if (c == '[')  stack.push_back(']');
            else if (!stack.empty() && c == stack.back()) stack.pop_back();
            else return false;
        }
        return stack.empty();
    }
};