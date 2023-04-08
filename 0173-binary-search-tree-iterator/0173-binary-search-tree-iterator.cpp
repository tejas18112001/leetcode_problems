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
class BSTIterator {
public:
    TreeNode*t ;
    stack<TreeNode*>st;
    BSTIterator(TreeNode* root) {
      
        while(root ) {
            st.push(root) ;
            root = root->left ;
        }
    }
    
    int next() {
       TreeNode*t = st.top() ;
       st.pop() ;
       int ans = t->val ; 
        
       t = t->right ;
        while(t) {
            st.push(t) ;
            t = t->left  ;
        }
       return ans ;
        
    }
    
    bool hasNext() {
       if(st.empty())
           return false; 
       return true ; 
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */