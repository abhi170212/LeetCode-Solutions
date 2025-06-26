class Solution {
public:
    int longestValidParentheses(string s) {
        // pahle stack me -1 [ or length calculation]
        // jab (  ayega to pish krna index 
        // jab ) ayega to pop krke dekhna ki empty ho gya stack 
        // agar empty hoga to index push kr dena 
        // aagr empty nhi hoga to pop krke length nikal lena 
        // len aur maxlen ko compare krke maxlen ko return kr do
        int maxLen =0 ;
        stack<int> st;
        st.push(-1);
        for(int i =0;i<s.length();i++){
            char ch = s[i];
            if(ch == '('){
                st.push(i);
            }else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }else{
                    int len = i - st.top();
                    maxLen = max(len,maxLen);
                }
            }
        }
        return maxLen;
    }
};