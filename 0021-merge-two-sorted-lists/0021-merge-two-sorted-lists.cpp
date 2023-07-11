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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*head = new ListNode() , *ans = head;
        
        while(list1 != NULL && list2 != NULL) {
           
            if(list1->val < list2->val) {
                head->next = new ListNode(list1->val) ;
                head = head->next ;
                list1 = list1->next ;
                
            }else {
                head->next = new ListNode(list2->val) ;
                head = head->next ;
              
                list2 = list2->next ;
            }
            
            
            
            
            
    }
        if(list1 == NULL) {
            head->next = list2 ;
        }else
            head->next = list1 ;
        
        
        
        return ans->next ;
    }
};