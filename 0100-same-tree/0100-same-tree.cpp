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
    bool isSameTree(TreeNode* p, TreeNode* q) {
       // sabse pahle dono null , then true 
       // ek null aur ek null nhi to not true 
       // dono ka values same hona chhahiye 
       // left me check karo 
       // right me check karo 
       // left aur right dono sahi same hona chahiye

       if(p == nullptr and q == nullptr) return true;
       if( p== nullptr || q == NULL) return false;
       if( p->val != q->val ) return false;
       bool right = isSameTree(p->right,q->right);
       bool left =isSameTree(p->left,q->left);

       return left && right;

    }
};