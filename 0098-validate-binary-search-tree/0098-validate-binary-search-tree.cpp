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
    
   bool flag = true ;
    
   void solution(TreeNode*&root , TreeNode*&pre) {
       if(!root) return  ;
       solution(root->left , pre) ;
     
      
       if(pre != NULL && pre->val >= root->val) {
           flag = false ;
           return ;
       }
       
       pre = root ;
       
       solution(root->right , pre) ;
       
       return ;
       
       
       
       
  }
    
   
    
    bool isValidBST(TreeNode* root) {
        
       
        TreeNode*t = NULL ;
         solution(root , t)  ;
       return flag ;
    
    }
} ;
