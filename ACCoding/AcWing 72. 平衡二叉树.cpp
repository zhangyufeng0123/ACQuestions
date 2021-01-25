/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode *root){
        if(root == NULL)    return 0;
        int left = dfs(root->left);
        if(left == -1)  return -1;
        int right = dfs(root->right);
        if(right == -1) return -1;
        if(abs(left - right) > 1)   return -1;
        return max(left, right) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        if(root == NULL)    return true;
        int k = dfs(root);
        if(k == -1) return false;
        else return true;
    }
};