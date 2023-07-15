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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode*head = new ListNode() , *ptr = head ;
        int carry = 0 ;
        int Val = 0 ;
        
        while(l1 && l2) {
            
            Val = l1->val + l2->val + carry ;
            carry = Val/10 ;
            Val = Val%10 ;
            ListNode*New = new ListNode(Val) ;
            // Val = 0 ;
            head->next = New ;
            head = head->next ;
            l1 = l1->next ;
            l2 = l2->next ;
            
        }
        
        while(l1) {
            Val = l1->val + carry ;
            carry = Val/10 ;
            Val = Val%10 ;
            ListNode*New = new ListNode(Val) ;
            // Val = 0 ;
            head->next = New ;
            head = head->next ;
            l1 = l1->next ;
        }
        
        while(l2) {
            Val = l2->val + carry ;
            carry = Val/10 ;
            Val = Val%10 ;
            ListNode*New = new ListNode(Val) ;
            // Val = 0 ;
            head->next = New ;
             head = head->next ;
            
            l2 = l2->next ;
        }
        
        while(carry) {
            Val =  carry%10;
            carry = carry/10 ;

            ListNode*New = new ListNode(Val) ;
            // Val = 0 ;
            head->next = New ;
            head = head->next ;
            
            
        }
        
        
        return ptr->next ;
        
    }
};