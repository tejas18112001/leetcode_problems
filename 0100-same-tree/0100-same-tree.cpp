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
        
        if(l->val != r->val) {
            return false ;
        }
        
        bool s1 = solution(l->left , r->left) ;
        bool s2 = solution(l->right , r->right) ;
        // if(s1 ==true ||  s2 == true) return true ;
        return s1 && s2;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return solution(p , q) ;
    }
};