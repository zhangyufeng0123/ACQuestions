class Solution {
public:
    int dfs(TreeNode *root){
        int left = 0, right = 0;
        if(root->left == NULL && root->right == NULL){
            return 1;
        }
        if(root->left != NULL){
            left = dfs(root->left) + 1;
        }
        if(root->right != NULL){
            right = dfs(root->right) + 1;
        }
        return max(left ,right);
    }
    
    int treeDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        return dfs(root);
    }
};