class Solution {
public:
    
    vector<string>ans, s;
    void solution(string &digits , string temp , int ind) {
        
        if(ind>= digits.size()) {
            if(temp.size() > 0)
             ans.push_back(temp) ;
            return ;
        }
        
        for(int i = 0  ; i < s[digits[ind]-'0'].size() ; i++){
             temp += s[digits[ind]-'0'][i] ;
             solution(digits , temp , ind+1) ;
             temp.pop_back() ;
          }
        
        
        
    }
    vector<string> letterCombinations(string digits) {
        // int size = 10 ;
        // if(digits)
        s.resize(10);
        s[0] = "" , s[1] = "" , s[2] = "abc" , s[3] = "def" , s[4] ="ghi" ,s[5] = "jkl" , s[6] = "mno" , s[7] = "pqrs" , s[8] = "tuv" , s[9] = "wxyz" ;
        
        solution(digits , "" , 0) ;
        
    
        return ans ;
    }
};