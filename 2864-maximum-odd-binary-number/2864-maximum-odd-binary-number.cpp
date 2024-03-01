class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt  = 0; 
        
        for(auto i: s) {
            if(i == '1')
            cnt += 1 ;
        }
        
        cnt-- ;
        string ans = string(cnt , '1') ;
        cout<<ans ;
        
        ans += string(s.size()-(cnt+1) , '0') ;
        ans = ans+"1" ;
        return ans ;
       
    }
};