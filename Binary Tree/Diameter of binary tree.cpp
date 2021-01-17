//solution one recursively order of n2
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
    int height(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        int ls=height(root->left);
        int hs=height(root->right);
        return max(ls,hs)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        int h1 = height(root->left);
        int h2=height(root->right);
        int opt1= h1 + h2;
        int opt2=diameterOfBinaryTree(root->left);
        int opt3=diameterOfBinaryTree(root->right);
        return max(opt1,max(opt2,opt3));
    }
};
