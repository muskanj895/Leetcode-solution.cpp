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
    int SumRoot(TreeNode* root, int value)
    {
        if(root == NULL)
        {
            return 0;
        }
        value = (value*2 + root->val);
        if(root->left == NULL && root->right == NULL)
        {
            return value;
        }
       
        return SumRoot(root->left,value)+ SumRoot(root->right,value);
    }
    int sumRootToLeaf(TreeNode* root) {
        return SumRoot(root, 0);
    }
    
};
