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
    int ans = 0 ;
  
     
    void travalsal(TreeNode*root , int val) {
        
        if(root == NULL) return ;
          val = root->val + val*10 ;
        if(!root->left && !root->right ) {
           
            ans += val ;
            return ;
        }
        // if(!root->right) {
        //     return ;
        // }
        
        // ans += val;
        // val = root->val + val*10 ;
        travalsal(root->left , val ) ;
        travalsal(root->right , val) ;
        
        
        // return val ;
    }
    
    int sumNumbers(TreeNode* root) {
        TreeNode*t = root ;
        travalsal(root , 0) ;
        return ans ;
    }
};