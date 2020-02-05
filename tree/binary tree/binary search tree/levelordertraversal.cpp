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
    vector<vector<int>> levelOrder(TreeNode* root) {
      std::queue<TreeNode*> q;
      std::vector<std::vector<int>> res;
      if (!root) return res;
      q.push(root);
      while(!q.empty()) {
          int elem = q.size();
          std::vector<int> curLevel;
          for(int i = 0; i < elem; ++i) {
              TreeNode *currNode = q.front();
              q.pop();
              if (currNode->left) {
                q.push(currNode->left);   
              }
              if (currNode->right) {
                  q.push(currNode->right);
              }
              curLevel.emplace_back(currNode->val);
          }
          res.emplace_back(curLevel);
      }
        return res;
    }
};
