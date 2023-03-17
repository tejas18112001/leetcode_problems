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
    int depth(TreeNode* root) {
        if(!root) return 0 ;
     
        
        return max(depth(root->left) , depth(root->right)) + 1 ;
    }
    
    void solution(TreeNode* root , vector<vector<int>>&ans , int level) {
        if(!root) return ;
        ans[level].push_back(root->val) ;
        solution(root->left , ans , level-1) ;
        solution(root->right , ans , level-1) ;
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
       
       // if(!root) return {} ;
        int height = depth(root) ;
         vector<vector<int>>ans(height) ;
        solution(root , ans , height-1) ;
        return ans ;
        
    }
};