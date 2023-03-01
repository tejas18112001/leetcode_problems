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
    
   

    int cnt = 0 ; 
    string sol(TreeNode* root) {
        if(root == NULL) {
            return "-" ; 
        }
        
        string left = sol(root->left) ;
        string right = sol(root->right) ;
        string s =  to_string(root->val)+"."  +left + right   ;
        return s ;
    }
    
    
    string solution(TreeNode*root , string s) {
        if(root == NULL) {
            return "-";
        }
        string left = solution(root->left , s) ;
        string right = solution(root->right , s) ;
        string s2 = to_string(root->val) + "." + left + right ;
        if(s2 == s)
            cnt = 1 ;
        return s2 ;
    }
    
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
      
       string s = sol(subRoot) ;
       cout<<s<<" " ;
       solution(root ,s) ; 
       
        if(cnt == 1)return true ;
        return false ;
    }
};