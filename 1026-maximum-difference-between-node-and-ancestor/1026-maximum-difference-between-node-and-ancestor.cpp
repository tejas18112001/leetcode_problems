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
  
     int Max = INT_MIN , Min  = INT_MAX ;
    
    
    int maxAncestorDiff(TreeNode*root , int Max = INT_MIN , int Min  = INT_MAX ) {
       
        if(root == NULL)
            return Max -Min ;
        Max = max(Max , root->val) ;
        Min = min(Min , root->val) ;
        
         //return max( ,maxAncestorDiff(root->right , Max, Min );

         return max(maxAncestorDiff(root->left , Max, Min ) , maxAncestorDiff(root->right,Max, Min ) ) ;
    }
};