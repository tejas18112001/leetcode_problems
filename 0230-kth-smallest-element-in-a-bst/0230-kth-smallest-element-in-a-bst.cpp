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
    bool flag = true ;
    int ans ;
    void solution(TreeNode*root , int k) {
        if(root == NULL) return    ;
        
             if(flag) {  
             solution(root->left  , k) ;
        
             n++ ;
             if(n == k) {
                 ans = root->val ;
                 flag = false ;
                 return ;
             }   
            
           
            solution(root->right , k) ;
     
        }
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        if(root == NULL) return 0;
        solution(root , k) ;
        
        return ans ;
    }
};