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
    
    /*\U0001f447
    1. How to travel the tree
    2. How yo compare tree within tree
    3. 
    */
    
    
    
    vector<TreeNode*>ans ;
    map<string , int>mp ;
    string solution(TreeNode*root ) {
        if(root == NULL) {
            return "-" ;
        }
        string left = solution(root->left ) ;
        string right = solution(root->right ) ;
        string Node = to_string(root->val)+ "." + left + right ;
        mp[Node] ++ ;
        if(mp[Node] == 2) {
            ans.push_back(root) ;
        }
            
        return Node ;
    }
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        // vector<TreeNode*>ans ;
        // if(root == NULL) return{} ;
        solution(root ) ;
        return ans ;
    }
};