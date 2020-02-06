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
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        int res{1};
        std::queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()) {
            int elem = q.size();
            for (int i = 0; i < elem; ++i) {
                TreeNode * currNode = q.front();
                q.pop();
                if (!currNode->left && !currNode->right) {
                    return res;                                         
                }
                if (currNode->left) {
                    q.push(currNode->left);
                }
                if (currNode->right) {
                    q.push(currNode->right);
                }
            }
            ++res;
        }
        return res;
        
    }
};
