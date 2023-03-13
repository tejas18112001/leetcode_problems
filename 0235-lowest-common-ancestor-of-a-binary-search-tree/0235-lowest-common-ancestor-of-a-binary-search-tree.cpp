/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode*solution(TreeNode*root , TreeNode*p , TreeNode*q) {
         if(root == p || root == q) 
            return root ;
        if((root->val > p->val  && root->val <q->val) || 
           (root->val > q->val && root->val < p->val))
            return root ;
        if(root->val < p->val) {
            // go to right
            return solution(root->right , p , q) ;
        } 
            
            // go to left
           return solution(root->left , p , q) ;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        // All posibilities of root node is the answer \U0001f447
        
//         if(root == p || root == q) 
//             return root ;
//         if((root->val > p->val  && root->val <q->val) || 
//            (root->val > q->val && root->val < p->val))
//             return root ;
        
        
//         // its mean required value may be at left or right side of root
//         if(root->val > p->val) {  // go to left of tree
//             return solution(root->left , p ,q) ;
//         }
        return solution(root , p , q) ;
        
        
       
    }
};