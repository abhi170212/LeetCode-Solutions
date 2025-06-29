class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nge;
        stack<int> st;
        for (int i = nums2.size() - 1; i >= 0; i--) {
            int num = nums2[i];
            while (!st.empty() && st.top() <= num) {
                st.pop();
            }
            if (st.empty()) {
                nge[num] = -1;
            } else {
                nge[num] = st.top();
            }
            st.push(num);
        }
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++) {
            result.push_back(nge[nums1[i]]);
        }
        return result;
    }
};
