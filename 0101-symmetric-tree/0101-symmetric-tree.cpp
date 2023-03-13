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
    string leftTree(TreeNode* root ,string &s ) {
        if(root == NULL) {
            return "-" ;
        }
        
        string left = leftTree(root->left , s) ;
        string right = leftTree(root->right , s) ;
        s = to_string(root->val) + "." + left+right ;
        return s ;
    }
    
    string rightTree(TreeNode* root , string &s) {
          if(root == NULL) {
            return "-" ;
        }
        
        
        string right = rightTree(root->right , s) ;
        string left = rightTree(root->left , s) ;
        s = to_string(root->val) + "." + right + left ;
        return s ;
    }
    
    bool isSymmetric(TreeNode* root) {
        string t1 = "" , t2 = "" ;
        string s1 = leftTree(root->left , t1) ;
               cout<<s1<<"\n" ;
              
        string s2 = rightTree(root->right , t2) ;
         cout<<s2<<"\n" ;
        if(s1 == s2) return true ;
        return false ;
    }
};