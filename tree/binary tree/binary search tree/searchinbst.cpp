/**
 * Definition for a binary tree node.
 */

#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root){
            std::cout<< root->val << std::endl;
            if (root->val == val) {
                return root;
            } else if (root->val > val) {
                return searchBST(root->left, val);   
            } else if (root->val < val){
                return searchBST(root->right, val);            
            } else {
                return nullptr;
            }
        }
        return nullptr;
    }
};