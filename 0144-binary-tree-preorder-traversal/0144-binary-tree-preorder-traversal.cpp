/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans(TreeNode* root, vector<int>& arr){
        if(root == nullptr){
            return arr;
        }

        arr.push_back(root->val);
        ans(root->left,arr);
        ans(root->right,arr);
        return arr;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;

        ans(root,arr);
        return arr;
        
    }
};