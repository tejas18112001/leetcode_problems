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
        map<ListNode* , int>mp ;
        while(s->next != NULL) {
            // f = f->next->next ;
            if(mp[s] == 1)
                return s ;
            mp[s]++ ;
            s = s->next ;
//             if(s == f) {
//                 while(s != n){
//                     s = s->next ;
//                     n = n->next ;
//                 }
                
//                 if(s == n)
//                     return s ;
//             }
        }
        return NULL;
    }
};