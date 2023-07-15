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
    
    
 ListNode* mergeTwolist(ListNode*list1 , ListNode*list2) {
 ListNode*head = new ListNode() , *ans = head;
        
        while(list1 != NULL && list2 != NULL) {
           ListNode*node = new ListNode() ;
            if(list1->val < list2->val) {
               
                node->val = list1->val ;
                list1 = list1->next ;
                
            }else {
                node->val = list2->val ;
                list2 = list2->next ;
            }
            
            head->next = node ;
            head = head->next ;
            
            
            
            
            
    }
        if(list1 == NULL) {
            head->next = list2 ;
        }else
            head->next = list1 ;
        
        
        
        return ans->next ;
        
}
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size() ;
        if(n == 0  ) return NULL ;
        
        while(n>1) {
            vector<ListNode*>p ;
            for(int i = 0 ; i<n ; i+=2) {
                if(i == n-1){
                    p.push_back(lists[i]) ;
                }else {
                    p.push_back(mergeTwolist(lists[i] , lists[i+1])) ;
                }
            }
            
            lists = p ;
            n = lists.size() ;
        }
        
        return lists[0] ;
    }
};