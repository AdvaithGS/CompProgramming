/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    void rdfs(TreeNode* root){
        if(root == nullptr){
            return;
        }
        rdfs(root->right);
        ans += root->val;
        root->val = ans;
        rdfs(root->left);    
    }

    TreeNode* bstToGst(TreeNode* root) {
        rdfs(root);
        return root;
    }
};