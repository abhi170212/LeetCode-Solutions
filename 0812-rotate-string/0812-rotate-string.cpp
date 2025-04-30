class Solution {
public:
    bool rotateString(string s, string goal) {
        for(size_t i=0;i<s.length() ;++i){
            string partOne = s.substr(0,i);
            string partTwo = s.substr(i);
            string ans = partTwo + partOne;
            if(ans == goal){
                return true;
            }
            
        }
        return false;
    }
};