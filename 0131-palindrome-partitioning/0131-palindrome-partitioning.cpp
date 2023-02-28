class Solution {
public:
    
    vector<vector<string>>ans ;
    
    bool checkPal(int i , int j , string s) {
        while(i < j) {
            if(s[i] != s[j]) {
                return false ;
            }
            i++ , j -- ;
        }
      return true ;
    }
    
    void solution(string s , vector<string>temp , int i) {
        
        if(i >= s.size()) {
            ans.push_back(temp) ;
            return ;
        }
        for(int k  = i ; k<s.size() ; k++) {
            if(checkPal(i , k , s)) {
                temp.push_back(s.substr(i , k-i+1)) ;
                solution(s ,temp , k+1 ) ;
                temp.pop_back() ;
            }
        }
        
         // return ;
    }
    
    
    vector<vector<string>> partition(string s) {
        vector<string>temp ;
        solution(s , temp , 0) ;
        return ans ;
    }
};