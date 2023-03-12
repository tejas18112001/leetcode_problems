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

    
    
    ListNode* solution(vector<int>res) {
        
        ListNode*root = NULL ;
        
         
        for(int i = 0 ; i<res.size() ; i++) {
            
        ListNode*temp  = new ListNode;
        ListNode*ptr ; 
        temp->val = res[i] ;
        temp->next = NULL ;
            ptr = root ;
            if(root == NULL) {
                root = temp ;
            }
            else {
            ptr = root ;
            while(ptr->next != NULL){
                ptr = ptr->next ;
            }
            
            ptr->next = temp ;
           
           }
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
        

        return solution(res) ;
    }
};