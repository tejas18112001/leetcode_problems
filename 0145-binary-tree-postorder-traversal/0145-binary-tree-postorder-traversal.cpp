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
    
    void solution(vector<int>&ans , TreeNode*root) {
        if(root == NULL) {
            return ;
        }
        solution(ans , root->left) ;
        
        solution(ans ,root->right) ;
        ans.push_back(root->val) ;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans ;
        solution(ans , root) ;
        return ans ;
    }
};