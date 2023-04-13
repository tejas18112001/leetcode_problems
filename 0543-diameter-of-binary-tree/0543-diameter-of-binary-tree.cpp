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
    
    
    int solution(TreeNode*root , int &ans) {
        if(!root) return 0 ;
        int left = solution(root->left , ans) ;
        int right = solution(root->right,ans) ;
        ans = max(ans , left + right) ;
        return max(left ,right) +1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0 ; 
        solution(root , ans) ;
        return ans;
    }
};