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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode *> st;
        if(root==nullptr) return nullptr;
        st.push(root);
        while(st.empty()==false){
            TreeNode* top=st.front();
            st.pop();
            if(top!=nullptr){
                st.push(top->left);
                st.push(top->right);
                swap(top->left,top->right);
            }
        }
        return root;
    }
};