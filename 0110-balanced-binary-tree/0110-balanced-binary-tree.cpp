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
    int ans = 1 ;
    int solution(TreeNode*root) {
        if(!root) return 0 ;
        int left = solution(root->left) ;
        int right = solution(root->right) ;
        if(abs(left - right) >1) 
            ans = 0 ;
        return max(left , right)+1 ;
    }
    
    bool isBalanced(TreeNode* root) {
        solution(root) ;
        if(ans == 1) return true ;
        return false ;
    }
};