class Solution {
public:
    bool isValid(string s) {
       stack<char>st ;
       int l = 0 , r = 0 ; 
       for(char i : s) {
           if(i == '(' || i == '{'|| i == '[') {
               st.push(i) ;
              
           }
           
           else {
               
           if(st.empty()) return false ;
           else if (i == ')' && st.top() == '(') 
                st.pop() ;
           else if (i == '}' && st.top() == '{')
               st.pop() ;
           else if(i == ']' && st.top() == '[')
               st.pop() ;
           else return false ;
           }
       }
        if(!st.empty()) return false ;
        return true ;
    }
};