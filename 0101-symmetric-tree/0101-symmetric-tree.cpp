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
    bool mirrorCheck(TreeNode* first,TreeNode* second){
        if( first == nullptr && second == nullptr) return true;
        if( first == nullptr || second == nullptr) return false;

        bool ans = false;
        if( first-> val == second -> val ) ans=true;
        bool leftAns = mirrorCheck(first->left,second->right);
        bool rightAns = mirrorCheck(first->right,second->left);
        return ans && rightAns && leftAns;
    } 
    bool isSymmetric(TreeNode* root) {
      return mirrorCheck(root->left,root->right);
    }
};