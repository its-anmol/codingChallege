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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        st.push(root);
        vector<int>res;
        if (root == nullptr) {
            return res;
        }
        while(!st.empty()){
            TreeNode* element=st.top();
            res.push_back(element->val);
            st.pop();
            if(element->right){
                st.push(element->right);
            }
            if(element->left){
                st.push(element->left);
            }
        }
        return res;
    }
};