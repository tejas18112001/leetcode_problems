class Solution {
public:
    
    vector<string>ans ;
    string s = "abc" ;
    void solution(int n , string temp ) {
        // base condition : when string length  == n \U0001f449 return 
        //
      
        if(temp.size() == n) {
            ans.push_back(temp) ;
            
            return ;
        }
        
        for(int i = 0 ; i<s.size() ; i++) {
            
         
            if(temp.back() == s[i]) continue ;
            
            temp += s[i] ;   // "a"+ "b"\U0001f449"ab" ; 
            solution(n ,  temp ) ;
            temp.pop_back() ;
                
        }
    }
    
    string getHappyString(int n, int k) {
      
        
         string e = "" ;
         cout<<e.back() ;
        
        solution( n ,  "" ) ;
        // cout<<ans.size();
        if(ans.size() < k) return "" ;
        
        return ans[k-1] ;
        
    }
};