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
    
   bool solution(TreeNode*&root , TreeNode*&l) {
       if(!root) return true ;
       bool left = solution(root->left , l) ;
        // if(left == false) return false ;
       
       if(l != NULL  && l->val >= root->val) return false ;
       l = root ;
       
       bool right = solution(root->right , l) ;
       
       return  left && right ;
       
       
       
       
  }
    
   
    
    bool isValidBST(TreeNode* root) {
        
       
        TreeNode*t = NULL ;
         long long int l = LLONG_MIN ;
        
       
       return solution(root , t) ;
    
    }
} ;
