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
    void solution(TreeNode*root , int val , TreeNode*node ) {
        // go to right sub-tree
        
        
        if(root->left == NULL && root->val >= val) {
            root->left = node ;
            return ;
        }
        
        else if(root->right == NULL && root->val < val) {
            root->right = node ;
            return ;
        }
        
        else if(root->val < val )  { 
            root = root->right ;
            solution(root , val  ,node) ;
        }
        else {
            root = root->left ;
            solution(root , val , node) ;
        }
        
    }
   
    TreeNode* insertIntoBST(TreeNode* root, int val) {
  //      Go in right sub tree
        TreeNode* node = new TreeNode(val) ;
        node->left = node->right = NULL ;
        
        if(root == NULL) {
            return node ;
        }
       solution(root , val , node) ;
       return root ;
    }
};