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
  
    bool solution(TreeNode*l , TreeNode*r) {
        if(!l || !r) {
            return l == r ;
            
        }
        if(l->val != r->val) 
            return false ;
        bool s1 = solution(l->left , r->right) ;
        bool s2 = solution(l->right , r->left) ;
        if(s1 == true && s2 == true) return true ;
        return false ;
        
    }
    bool isSymmetric(TreeNode* root) {
       return solution(root->left , root->right) ;
    }
};