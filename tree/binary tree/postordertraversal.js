/**
 * Definition for a binary tree node.
 * 
 * @param {TreeNode} root
 * @return {number[]}
 */

function TreeNode(val) {
    this.val = val;
    this.left = this.right = null;
}

 var traverse = (root, list) => {
    if (root) {
        if (root.left) {
            traverse(root.left, list)            
        }
        if (root.right) {
            traverse(root.right, list)             
        }
        list.push(root.val)
        
    }
}

var postorderTraversal = function(root) {
    var postorder = []
    if (root) {
        traverse(root, postorder)
    }
    return postorder
};