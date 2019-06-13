/**
 * Definition for a binary tree node.
 */
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  };


class Solution {
public:
    
    bool checkSubTree(TreeNode *tree, int val) {
        if (tree) {
            return tree->val == val ? checkSubTree(tree->left, val) && checkSubTree(tree->right, val) : false;
        }
        return true;
    }
    
    bool isUnivalTree(TreeNode* root) {
       if (root) {
        int val = root->val;
        return checkSubTree(root, val);
       }
        return false;
    }
};