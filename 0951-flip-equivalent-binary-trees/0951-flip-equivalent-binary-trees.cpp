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
    
   
    
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        // (either left1 == left2 && right1 == right2 ) || 
        // (left1 == right2  && right1 == left2)
        
        if(!root1 || !root2 ) {
            return !root1 && !root2;
        }
        
       if( root1->val != root2->val) return false ;
        
//        bool left1 = flipEquiv(root1->left , root2->left) ;
//        bool right1 ;
       
//              right1 = flipEquiv(root1->right , root2->right) ;
//         }else 
//             right1 = false ;
        
//         bool left2 = flipEquiv(root1->left , root2->right) ;
        
//        bool right2  ;
//       if(left2) right2 = flipEquiv(root1->right , root2->left) ;
//         else 
//             right2 = false ;
       
       
           
      return ((flipEquiv(root1->left , root2->left ) && 
               flipEquiv(root1->right , root2->right) )  || 
           (flipEquiv(root1->left , root2->right) &&
            flipEquiv(root1->right , root2->left) ) );
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};