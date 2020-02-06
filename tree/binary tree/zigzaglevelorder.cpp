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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        std::vector<std::vector<int>> res;
        if (!root) return res;
        int level{};
        std::queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()) {
            int elem = q.size();
            std::vector<int> currLevel;
            for (int i = 0; i < elem; ++i) {
                TreeNode *currNode = q.front();
                q.pop();
                if (currNode->left) {
                    q.push(currNode->left);
                }
                if (currNode->right) {
                    q.push(currNode->right);
                }
                currLevel.emplace_back(currNode->val);
            }
            level++;
            if (level % 2 == 0) {
                for (int i = 0; i < currLevel.size()/2; ++i) {
                    std::swap(currLevel[i], currLevel[currLevel.size() - i - 1]);
                }
            }
            res.emplace_back(currLevel);
        }
        return res;
    }
};
