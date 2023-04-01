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
    
    vector<int>solution(TreeNode*root) {
        if(!root) {
        
            return {0 , 0};
        }
        vector<int>a = solution(root->left) ;
        vector<int>b = solution(root->right) ;
       
        int wR = root->val + a[1] + b[1] ;
        int woR = max(a[0] , a[1]) + max(b[0] , b[1]) ;
        return {wR , woR} ;
        
        
       
    }
    
    int rob(TreeNode* root) {
        
        vector<int>ans = solution(root) ;
        return max(ans[0] , ans[1]) ;
        
    }
};