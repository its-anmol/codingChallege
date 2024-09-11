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
    void postorder(TreeNode*root,vector<int>&res){
        if(root==nullptr) return;
        postorder(root->left,res);
        postorder(root->right,res);
        res.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        // postorder(root,res);
        // return res;
        if (root == nullptr) {
            return res;
        }
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        st1.push(root);
        while(!st1.empty()){
            TreeNode*node=st1.top();
            st1.pop();
            st2.push(node);
            if(node->left){
                st1.push(node->left);
            }
            if(node->right){
                st1.push(node->right);
            }
        }
        while(!st2.empty()){
            res.push_back(st2.top()->val);
            st2.pop();
        }
        return res;
    }
};