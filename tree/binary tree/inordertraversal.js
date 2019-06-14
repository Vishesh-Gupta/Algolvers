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
    if (root.left != null) {
        traverse(root.left, list)
    }
    list.push(root.val)
    if (root.right != null) {
        traverse(root.right, list)
    }
}

var inorderTraversal = function(root) {
    var inorder = []
    if (root) {
        traverse(root, inorder)
    }
    return inorder
};