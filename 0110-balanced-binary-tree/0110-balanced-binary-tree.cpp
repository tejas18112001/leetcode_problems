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
    
    int n = 0 ;
    int solution(TreeNode*t) {
        if(t == NULL) {
            return 0 ;
        }
        int l = solution(t->left) ;
        int r = solution(t->right) ;
        if(abs(l-r) >1)  n = 1 ;
        return max(l , r) + 1 ;
    }
      
    bool isBalanced(TreeNode* root) {
        solution(root) ;
        if(n == 1) return false;
        return true ;
    }
};