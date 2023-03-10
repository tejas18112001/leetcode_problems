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


// #include  <random>
// #include  <iterator>




class Solution {
public:
    ListNode* head ;
    int count = 0 ;
    
    Solution(ListNode* head) {
        this->head = head ;
         ListNode*curr = head ; 
        while (curr) {
            
            count++ ;
            curr = curr->next;
        }
    }
    
    int getRandom() {
       
        // int count = 0;
        int result = 0;
        ListNode*temp = head;
     
      

     
        
        result = rand()%count ;
        
        for(int i = 0 ; i<result ; i++) {
            
            temp = temp->next ;
        }
        
        int res  = temp->val ;
       
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */