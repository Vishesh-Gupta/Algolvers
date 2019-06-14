/**
 * Definition for a Node.
 * function Node(val,children) {
 *    this.val = val;
 *    this.children = children;
 * };
 */
/**
 * @param {Node} root
 * @return {number[]}
 */
var traverse = (root, list) => {
    if (root) {
        list.push(root.val)
        root.children.map(child => traverse(child, list))
    }
}

var preorder = function(root) {
    var preordergeneral = []
    if (root) {
        preordergeneral.push(root.val)
        root.children.map(child => traverse(child, preordergeneral))
    }
    return preordergeneral
};