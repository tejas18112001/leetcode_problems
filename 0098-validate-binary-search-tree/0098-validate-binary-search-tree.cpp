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
    
   bool solution(TreeNode*&root , long long int min , long long max) {
       if(!root) return true ;
       
       
       
       if(root->val <= min || root->val >= max) return false ;
       
       bool left = solution(root->left , min , root->val) ;
       bool right = solution(root->right , root->val , max) ;
       
       return  left && right ;
       
       
       
       
  }
    
   
    
    bool isValidBST(TreeNode* root) {
        
       
        TreeNode*t = NULL ;
         long long int min = LLONG_MIN , max = LLONG_MAX ;
        
       
       return solution(root , min , max) ;
    
    }
} ;
