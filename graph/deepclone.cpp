/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
class Solution {
public:
    
    Node* cloneGraph(Node* node) { 
        if (!node) return NULL;
        std::unordered_map<Node *, Node *> m;
        std::queue<Node *> q;
        
        Node *newNode = new Node(node->val);
        q.push(node);
        
        m[node] = newNode;
        while(!q.empty()) {
            Node *currNode = q.front();
            q.pop();
            
            std::vector<Node *> v = currNode->neighbors;
            int n = v.size();
            for (int i = 0; i < n; ++i) {
                if (m[v[i]] == NULL) {
                    Node *n = new Node(v[i]->val);
                    m[v[i]] = n;
                    q.push(v[i]);
                }
                m[currNode]->neighbors.emplace_back(m[v[i]]);
            }
        }
        return m[node];
    }
};
