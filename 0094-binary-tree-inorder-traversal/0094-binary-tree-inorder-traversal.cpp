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
    void ans(TreeNode* root,vector<int>&ans_2){
        //LNR
        if(root == NULL) return;
        ans(root->left,ans_2);
        ans_2.push_back(root->val);
        ans(root->right,ans_2);
    }
    vector<int> inorderTraversal(TreeNode* root) {
         // inorder -> LNR 
         vector<int> ans_2;
         ans(root,ans_2);
         return ans_2;

       
    }
};