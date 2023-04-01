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
    
   bool solution(TreeNode*&root , TreeNode*&pre) {
       if(!root) return true ;
       bool left = solution(root->left , pre) ;
       if(left == false) return false ;
      
       if(pre != NULL && pre->val >= root->val) return false ;
       pre = root ;
       
       bool right = solution(root->right , pre) ;
       
       return right ;
       
       
       
       
  }
    
   
    
    bool isValidBST(TreeNode* root) {
        
       
        TreeNode*t = NULL ;
               
       return solution(root , t) ;
    
    }
} ;
