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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0 ;
        ListNode*t = head ,*s = head ;
     
        while(t != NULL) {
            cnt++;
            t = t->next ;
        }
        
        t = head ;
        cnt = cnt- n ;
        if(cnt == 0) return head->next ;
        for(int i = 0 ; i<cnt ; i++) {
            s = t ;
            t = t->next ;
        }
        
        s->next = t->next ;
       
        return head ;
    }
};