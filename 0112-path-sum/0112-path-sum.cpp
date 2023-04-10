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
    bool solution(TreeNode*root , int target) {
        if(!root) return false;
        target =  target- root->val ;
         if(target == 0 && !root->left && !root->right)
        {
            return true ;
        }
        bool left = solution(root->left, target);
        bool right = solution(root->right, target);
        
        // // if(target!=0 && !root->left && !root->right) return false;
        // if(!root->left && !root->right)
        // {
        //     if(target == 0) return true ;
        //     else return false ;
        // }
        return left || right ;
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        return solution(root, targetSum);
    }
};