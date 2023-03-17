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
    map<int,int>mp ;
    TreeNode*tree(vector<int>& preorder , int ps , int pe ,vector<int>& inorder , int is , int ie ) {
        
          if(is > ie || ps>pe) {
            return NULL ;
        }
       
        int rootPos  ; 
        TreeNode*root = new TreeNode(preorder[ps]) ;
        for(int i = is; i <= ie; i++){
        if(inorder[i] == root->val){
            rootPos = i;
            break;
        }
    }
        int rootLeftNo = rootPos - is ;
        
       
        
        root->left = tree(preorder ,ps+1 , ps + rootLeftNo , inorder , is , rootPos-1) ;
        root->right = tree(preorder ,  ps - is + rootPos+1 , pe , inorder , rootPos+1 , ie) ;
        return root ;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=  0 ; i<inorder.size() ; i++) {
            mp[inorder[i]] = i ;
        }
        
        
        return tree(preorder ,0 ,preorder.size()-1 , inorder , 0 , inorder.size()-1) ;
    }
};