https://leetcode.com/problems/maximum-depth-of-binary-tree/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        
        int l =maxDepth(root->left);
        int r =maxDepth(root->right);
        
        return 1+max(l,r);
        
    }
};
