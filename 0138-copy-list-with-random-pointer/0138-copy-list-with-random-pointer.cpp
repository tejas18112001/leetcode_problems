/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    
    Node* copyRandomList(Node* head) {
       map<Node* , Node*>mp ;
       
         Node*t = head ;
         
         while(t != NULL) {
             Node*copy = new Node(t->val) ;
             mp[t] = copy ;
             t = t->next ;
         }
        
        t = head ;
        
        while(t != NULL) {
            Node*copy = mp[t] ;
           
            copy->next = mp[t->next] ;
            copy->random = mp[t->random] ;
            t = t->next ;
        }
        return mp[head] ;
    }
};




















