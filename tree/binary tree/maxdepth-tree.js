/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
findDepth = (root) => {
    if (root == null) return 0;
    else return 1 + Math.max(findDepth(root.left), findDepth(root.right));
}

var maxDepth = function(root) {
    return findDepth(root);
};