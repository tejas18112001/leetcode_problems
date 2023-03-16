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
    
     map<int , int>hm ;
    TreeNode* buildTreePostIn(vector<int> &inorder, int is, int ie, vector<int> &postorder, int ps, int pe){
        if (ps>pe || is>ie) return NULL;
        TreeNode*root = new TreeNode(postorder[pe]) ;
        int rootPos = hm[postorder[pe]] ;
        int NumLeft = rootPos - is ;
        root->left = buildTreePostIn(inorder , is , rootPos-1 ,postorder,ps , ps+NumLeft-1 ) ;
        root->right = buildTreePostIn(inorder , rootPos+1 , ie , postorder , ps + NumLeft  , pe-1) ;
        return root ;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       if (inorder.size() != postorder.size())
            return NULL;
        
        for (int i=0;i<inorder.size();++i)
            hm[inorder[i]] = i;
        return buildTreePostIn(inorder, 0, inorder.size()-1, postorder, 0, 
                              postorder.size()-1);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }
};