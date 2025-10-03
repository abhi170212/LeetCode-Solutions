class Solution {
public:
    int ctnFxn(string s,int i , int j){
        int ctn =0;
        while(j<s.size() && i >= 0  && s[i] == s[j] ) {
            ctn ++;
            i--;
            j++;
        }

        return ctn;
    } 
    int countSubstrings(string s) {
        // pahle isme likho ki kitna hai 
        // uske baad indexes ko chnagr krke count nikalo odd aur even length wlo ka 

        int ctn =0;
        for(int i =0;i<s.size();i++){
            // odd ka answer 
            int oddAns = ctnFxn(s,i,i);
            // even ka answer 
            int evenAns = ctnFxn(s,i,i+1);

            ctn = ctn + oddAns + evenAns;
        }

        return ctn;
    }
};