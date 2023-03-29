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
    int ans = 0 ;
    
    void checkGoodN(string str , int val) {
        int flag = 0 ;
        for(int i = 0 ; i<str.size() ; i++) {
            if( (int (str[i]) - '0') > val){
                flag = 1 ;
                break ;
            }
        }
        if(flag == 0) ans++;
    }
    
    void solution(TreeNode*root , int mx) {
        if(root == NULL) {
            return ;
        }
        
       
        if(root->val >= mx)
            ans++ ;
        mx = max(mx , root->val) ;
       
        solution(root->left , mx) ;
       
        solution(root->right , mx) ;
    }
    
    int goodNodes(TreeNode* root) {
        if(!root) return 0 ;
        if(!root->left && !root->right) return 1 ;
        string s = "" + to_string(root->val) ;
        int mx = root->val ;
        solution(root , mx) ;
        return ans ;
    }
};