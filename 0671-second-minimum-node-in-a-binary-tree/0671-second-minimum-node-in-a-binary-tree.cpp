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
    
    
     long long int secondmin = 2147483649 ;
     long long int  firstmin = INT_MAX ;
    
    void solution(TreeNode*root) {
        if(!root){
            return  ;
        }
        
        if(firstmin > root->val)
            firstmin = root->val ;
        
        if(root->val < secondmin && firstmin < root->val)
            secondmin = root->val ;
        
        
        solution(root->left) ;
        solution(root->right) ;
        return  ;
    }
    int findSecondMinimumValue(TreeNode* root) {
        solution(root) ;
        if(secondmin == 2147483649)
            return -1 ;
        return secondmin ;
    }
};