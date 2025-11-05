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
    vector<int> ansFxn(vector<int> &arr,TreeNode* root,bool flag){
    if(root == nullptr) return arr;
    if(flag && root->right == nullptr && root->left == nullptr) {
        arr.push_back(root->val);
    }
    ansFxn(arr,root->left,true) ;
    ansFxn(arr,root->right,false);
    return arr;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        vector<int> arr;
        int sum =0;
        ansFxn(arr,root,false);

        for(int i =0;i<arr.size();i++){
            sum+= arr[i];
        }
        return sum;

       
    }
};