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
    bool isCousins(TreeNode* root, int x, int y) {
        if (!root) return false;
        std::queue<TreeNode *> q;
        std::map<int, int> parent;
        std::map<int, int> depth;
        q.push(root);
        int level{};
        parent[root->val] = -1;
        depth[root->val] = level;
        while(!q.empty()) {
            int elem = q.size();
            for (int i = 0; i < elem; ++i) {
                TreeNode *currNode = q.front();
                q.pop();
                if (currNode->left) {
                    parent[currNode->left->val] = currNode->val;
                    depth[currNode->left->val] = level + 1;
                    q.push(currNode->left);
                }
                if (currNode->right) {
                    parent[currNode->right->val] = currNode->val;
                    depth[currNode->right->val] = level + 1;
                    q.push(currNode->right);
                }
            }
            ++level;
        }
        return ((parent[x] != parent[y]) && (depth[x] == depth[y]));
    }
};
