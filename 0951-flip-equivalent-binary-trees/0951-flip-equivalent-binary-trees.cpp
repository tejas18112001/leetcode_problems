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
    
   
    
    void solution(TreeNode*root , vector<int>&a) {
        if(!root) return  ; 
        a.push_back(root->val) ;
        int l = root->left != NULL ? root->left->val : -1 ;
        
        int r = root->right != NULL ? root->right->val : -1 ;
        if(l < r) {
            solution(root->left , a) ;
            solution(root->right , a) ;
        }else {
            solution(root->right , a) ;
            solution(root->left , a) ;
        }
        
        a.push_back(-100) ;
        
    }
    
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
//         // (either left1 == left2 && right1 == right2 ) || 
//         // (left1 == right2  && right1 == left2)
        
//         if(!root1 || !root2 ) {
//             return !root1 && !root2;
//         }
        
//        if( root1->val != root2->val) return false ;
        
//        return ((flipEquiv(root1->left , root2->left ) && 
//                flipEquiv(root1->right , root2->right) )  || 
//            (flipEquiv(root1->left , root2->right) &&
//             flipEquiv(root1->right , root2->left) ) );
        
        vector<int>a , b ;
        solution(root1 , a) ;
        solution(root2 , b) ;
        return a == b ;
        
        
        
        
    }
     
    
    
};