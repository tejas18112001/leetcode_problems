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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false ;
        ListNode*sec = head ,*fir = head ;
        while(sec != NULL && sec->next != NULL) {
            
            fir = fir->next ;
            sec = sec->next->next ;
            if(sec == fir)
                return true ;
        }
        
        return false ;
    }
};