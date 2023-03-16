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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root) {
            return {} ;
        }
         queue<TreeNode*>q ;
         q.push(root) ;
         vector<vector<int>>ans ;
         
        while(!q.empty()) {
            vector<int>p ;
            int s = q.size() ; 
            for(int i= 0 ; i<s; i++) {
                TreeNode*t = q.front() ;
                q.pop() ;
                if(t->left)q.push(t->left) ;
                if(t->right)q.push(t->right) ;
                p.push_back(t->val) ;
            }
            ans.push_back(p) ;
        }
        reverse(ans.begin() , ans.end()) ;
        return ans;
    }
};