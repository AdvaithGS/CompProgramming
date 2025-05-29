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
    map<int,Node*> mp;

    void dfs(Node* node){
        Node* base = mp[node->val]; 
        for(auto x : node->neighbors){
            if(mp.find(x->val) == mp.end()){
                Node* x_ = new Node(x->val,vector<Node*>()); 
                mp[x->val] = x_;
                dfs(x);
            }
            base->neighbors.push_back(mp[x->val]);
        }
    }

    Node* cloneGraph(Node* node) {
        if (node == nullptr) return nullptr;
        
        Node* set = new Node(node->val);
        // set->val = node->val;
        mp[node->val] = set;

        dfs(node);
        return set;
    }
};