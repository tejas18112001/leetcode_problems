/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    TreeNode*solution(vector<int>arr , int left , int right ){
        if(left > right) {
            return NULL ;
        }
        
        int mid = left  + ( right- left)/2 ;
        
        TreeNode*root = new TreeNode(arr[mid] );
        root->left = solution(arr , left , mid-1) ;
        root->right = solution(arr, mid+1 , right) ;
        return root ;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL) return NULL ;
        ListNode*s ,*t = head ;
        int n = 0  , i = 0;
        while(s) {
            s = s->next ;
            n++ ;
        }
        
        vector<int>arr(n) ;
        
        while(t) {
            arr[i] = t->val ;
            t = t->next ;
            i++ ;
        }
        
        cout<<n<<"\n" ;
        TreeNode*root = solution(arr , 0 , n-1) ;
        
        
        return root ;
    }
};