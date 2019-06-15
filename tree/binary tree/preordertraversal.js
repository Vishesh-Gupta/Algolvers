/**
 * Definition for a binary tree node.
 * @param {TreeNode} root
 * @return {number[]}
 */
function TreeNode(val) {
    this.val = val;
    this.left = this.right = null;
}

var traverse = (root, list) => {
    if (root) {
        list.push(root.val);
        traverse(root.left, list)
        traverse(root.right, list)
    }
}

var preorderTraversal = function(root) {
    var preorder = []
    if (root) {
        traverse(root, preorder)
    }
    return preorder
};