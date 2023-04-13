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
    
    void solution(TreeNode*root , string &s) {
        if(!root) {
            
            return ;
        
        }
        
        s += "(" ;
        s += to_string(root->val) ;
        
        if(!root->left && root->right) 
            s+= "()" ;
        solution(root->left , s) ;
        solution(root->right , s) ;
        s += ")" ;
    }
    
    string tree2str(TreeNode* root) {
        string s = "" ;
        solution(root , s) ;
        s.pop_back() ;
        
        return s.substr(1 , s.size()-1) ;
    }
};