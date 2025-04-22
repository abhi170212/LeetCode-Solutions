class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int r, int c) {
        vector<vector<int>> ans;
        for (int i=0; i<rows; i++) {
            for (int j=0; j<cols; j++)
                ans.push_back({i, j});
        }

        sort (ans.begin(), ans.end(), [&] (auto& a, auto& b) {
            return (abs(r-a[0]) + abs(c-a[1]) < abs(r-b[0]) + abs(c-b[1]));
        });

        return ans;
    }
};