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
    
    /* 
    1.preorder travalsal \U0001f449  root ▶ left ▶ right 
    2.postorder travalsal \U0001f449  left ▶ right▶ root   
    3.inordered travalsal \U0001f449  left ▶ root ▶ right
    
    */
    
    vector<int>ans ;
    void solution(TreeNode * root) {
        if(root == NULL) {
            return ;
        }
        
       
        cout<<root->val<<" " ;
        solution(root->left) ;
         ans.push_back(root->val) ;
        // ans.pop_back() ;
       
        // ans.push_back(root->val) ;
        cout<<root->val<<" " ;
        solution(root->right) ;
        // ans.pop_back() ;
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        solution(root) ;
        return ans ;
    }
};