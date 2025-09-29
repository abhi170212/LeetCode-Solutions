class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                st.pop();
            } 
            else if (operations[i] == "D") {
                int temp = st.top();
                st.push(2 * temp);
            } 
            else if (operations[i] == "+") {
                int first = st.top(); st.pop();
                int second = st.top();
                st.push(first); // wapas daala
                st.push(first + second);
            } 
            else {
                st.push(stoi(operations[i])); 
            }
        }

        int ans = 0;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
