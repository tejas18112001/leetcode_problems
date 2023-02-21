class Solution {
public:
    vector<string>ans ;

    void backtrack(int n  ,string s , int open , int closed) {
        if(open == n && closed == n) {
            ans.push_back(s) ;
            
            return ;
        }
        
        if(open < n) {
            s += "(" ;
            backtrack(n , s,open+1 , closed) ;
            s.pop_back() ;
            
        }
        
        if(closed < open) {
            s += ")" ;
            backtrack(n   , s,open , closed + 1) ;
            s.pop_back() ;
        }
      
      
        
    }
    vector<string> generateParenthesis(int n) {
        string s = "" ;
        backtrack(n ,s ,0 , 0) ;
        return ans ;
    }
}; 