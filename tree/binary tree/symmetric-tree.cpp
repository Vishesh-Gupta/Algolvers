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
    bool checkChildren(TreeNode *leftTree, TreeNode *rightTree) {
       if (leftTree && rightTree) {
        if (leftTree->val == rightTree->val) {
           return checkChildren(leftTree->right, rightTree->left) && checkChildren(leftTree->left, rightTree->right);
        }
           return false;
       } else if (!leftTree && rightTree || leftTree && !rightTree) {
           return false;
       }
        return true;
    }
    
    bool isSymmetric(TreeNode* root) {
        if (root) {
            if (root->left == nullptr && root->right == nullptr) return true;
            return root->left && root->right ? checkChildren(root->left, root->right) : false;            
        } else {
            return true;
        }
    }
};