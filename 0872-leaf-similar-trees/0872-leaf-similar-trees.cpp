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
    
    void postorder(TreeNode*root1  , vector<int>&p)
    {
       if(root1 == NULL)
           return ;
        postorder(root1->left , p);
       
        if(root1->left == NULL && root1->right == NULL)
            p.push_back(root1->val);
        postorder(root1->right ,p);
       
    
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       
          vector<int>p;
          vector<int>q;
       
         postorder(root1 , p);
         postorder(root2 , q);

        
        
        
         for(auto i:p)
            cout<<i<<" ";
        cout<<"\n";
        for(auto i:q)
            cout<<i<<" ";
        
        if(p == q)
        return true ; 
        return false;
    }
};