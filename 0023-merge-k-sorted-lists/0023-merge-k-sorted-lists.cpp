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
class Solution {
public:
    void solution(ListNode**root , int val) {
        ListNode*temp  = new ListNode;
        ListNode*ptr ; 
        temp->val = val ;
        temp->next = NULL ;
         
        if(*root == NULL) {
            *root = temp ;
        }
        else {
            
            ptr = *root ; 
            while(ptr->next != NULL) {
                ptr = ptr->next ;
            }
            ptr->next = temp ;
        }
    }
    
    
    ListNode*sol(vector<int>arr) {
        ListNode*root = NULL ;
        for(int i = 0 ; i<arr.size();  i++) {
            solution(&root , arr[i]) ;
        }
        return root ;
    }
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) {
            return NULL ;
        }
        vector<int>res ;
        for(int i = 0 ; i<lists.size() ; i++) {
            ListNode*s = lists[i] ;
            while(s) {
                
                res.push_back(s->val) ;
                s = s->next ;
            }
        }
        
        for(auto i : res) {
            cout<<i<<" ";
        }
        
        sort(res.begin() , res.end()) ;
        // cout<<"\n" ;
        
        ListNode*ans = sol(res) ;
        // cout<<ans->val ;
        return ans ;
    }
};