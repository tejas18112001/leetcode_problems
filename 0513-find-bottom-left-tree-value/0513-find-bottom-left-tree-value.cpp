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
    
    int maxDepth = 0 ;
     int val  = 0;
    void solution(TreeNode*root , int depth) {
       
        if(root) {
            if(depth > maxDepth) {
                val = root->val ;
                maxDepth = depth ;
                
            }
            
             solution(root->left , depth +1) ;
             solution(root->right , depth + 1) ;
         
        }
       
    }
    
    
    
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q ;
        int val ;
        q.push(root) ;
        TreeNode*t ;
        while(!q.empty()) {
            
            int s = q.size() ;
             val = q.front()->val ;
            for(int i = 0 ; i<s ; i++) {
                t = q.front() ;
                q.pop() ;
                
                if(t->right) {
                    q.push(t->right) ;
                }
                
                if(t->left) {
                    q.push(t->left) ;
                }
            }
        }
        
        // solution(root ,1) ;
        
        
        
        return t->val;
    }
};