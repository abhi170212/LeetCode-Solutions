class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char,int> broken;
        for(char c : brokenLetters){
            broken[c] = 1;
        }
        int cnt = 0;
        bool flag = 1;
        for(int i=0;i<text.size();i++){
            if(broken[text[i]] == 1){
                flag = 0;
            }
            if(text[i]==' ' || i==text.size()-1){
                if(flag)
                    cnt++;
                else{
                    flag = 1;
                }
            }
        }
        return cnt;
    }
};