class Solution {
public:
    bool isPalindrome(string s) {
        // pahle naye wale string me sare alphabets ko rakho
        //uske baad check akr lo palindrome
        string str ="";
        for(int i =0;i<s.length();i++){
            if(isalnum(s[i])){
                str.push_back(tolower(s[i]));
            }
        }
    int last = str.length() - 1;
    int first = 0;
    while(first <= last){
        if(str[first] != str[last]){
            return false;
        }
        last--;
        first++;
    }
    return true;
    }
};