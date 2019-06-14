/**
 * Definition for a Node.

 * @param {Node} root
 * @return {number[]}
 */

function Node(val,children) {
    this.val = val;
    this.children = children;
};
   
var traverse = (root, list) => {
    if (root) {
        root.children.map(child => traverse(child, list))
        list.push(root.val)
             
    }
}

var postorder = function(root) {
    var postordergeneral = []
    if (root) {
        root.children.map(child => traverse(child, postordergeneral))
        postordergeneral.push(root.val)
    }
    return postordergeneral
};