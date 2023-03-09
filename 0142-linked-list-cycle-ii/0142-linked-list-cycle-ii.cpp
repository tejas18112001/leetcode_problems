/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL ||head ->next == NULL )return NULL ;
        ListNode *s ,*f , *n ;
        s = f  = n = head ;
        while(f->next != NULL && f->next->next != NULL) {
            f = f->next->next ;
            s = s->next ;
            if(s == f) {
                while(s != n){
                    s = s->next ;
                    n = n->next ;
                }
                
                if(s == n)
                    return s ;
            }
        }
        return NULL;
    }
};