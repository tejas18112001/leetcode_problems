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
   vector<int>ans ;

    vector<int> rightSideView(TreeNode* root) {
        if(!root) return ans ;
        queue<TreeNode*>q ;
        // vector<int>p ;
       
        q.push(root) ;
        // int val = root->val ;
        // ans.push_back({val}) ;
        while(!q.empty()) {
            
            // TreeNode*t = q.front() ;
           
            vector<int>p ;
            int s ;
            int t = q.size() ;
            for(int i = 0 ; i<t ; i++) {
                TreeNode*t = q.front() ;
                 q.pop() ;
                if(t->left ) 
                    q.push(t->left) ;
                if(t->right)
                    q.push(t->right) ;
                // p.push_back(t->val) ;
                s = t->val ;
                
                
            }
//          if(s != 200 ) {
         
          ans.push_back(s) ;
         // }
            
        }

        return ans ;

    }
};