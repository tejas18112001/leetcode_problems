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

    
    
  
    ListNode*merge_two_lists(ListNode*&a , ListNode*&b) {
        ListNode*root = new ListNode(0) ;
        ListNode*curr = root ;
        
        while(a or b) {
            if(!a) {
               curr->next = b ;
               
            
               break ;
            }
            
             else if(!b) {
                curr->next = a ; 
              
                break ;
            }
            
            else if(a->val <= b->val) {
                
                curr->next = a ;
                curr = curr->next ;
                a = a->next ;
                
                
            }
            
             else{
                
                curr->next = b ;
                 curr = curr->next ;
                b = b->next ;
                
            }
            
            
        }
         
         return root->next ;
    }
   
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size() ;
        if(n == 0) return NULL ;
        while(n > 1) {
            vector<ListNode*>a ;
            for(int i = 0 ; i<n; i+=2) {
                if(i == n-1) a.push_back(lists[i]) ;
                else {
                    cout<<1<<"\n" ;
                    a.push_back(merge_two_lists(lists[i] , lists[i+1])) ;
                }
            }
            
            lists = a ;
            n = lists.size() ;
        }
        return lists[0] ;
    }
    
};