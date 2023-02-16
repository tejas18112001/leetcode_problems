class Solution {
public:
    
   
    
    string addBinary(string a, string b) {
       string ans = "" ;
     
       int k = a.size() - b.size() ;
       k = abs(k) ;
      
       string s = "0" ;
       if(a.size() > b.size()) 
           for(int i = k ; i>0 ; i--) 
               b = s + b ;
       else if(b.size() > a.size())
         for(int i = k ; i>0 ; i--) 
               a = s + a ;  
       
        a = s + a  , b = s + b ;
        cout<<a<<" "<<b<<endl ;
        
        int carry = 0 ; 
       
        // cout<<a.charAt(0) - '0'<<endl ;
        for(int i = a.size() -1 ; i >= 0 ; i--) {
            
            string s1 = "" ;
            string s2 = "" ;
            s1 += a[i]  , s2 += b[i] ;
            int x = stoi(s1) + stoi(s2) + carry ; //(a.charAt(i) - '0') + (b.charAt(i) - '0') + carry ;
            if(x == 1){
                 ans = "1" + ans ;
                 carry = 0 ;
            }
            else if(x == 2) {
                ans = "0" + ans ;
                carry = 1 ;
            } 
            else if(x == 3) {
                ans = "1" + ans ;
                carry = 1 ;
            }
            else {
                ans = "0" + ans ;
                carry = 0 ;
            }
               
           
        }
    
        if(ans[0] == '0') {
            ans.erase(ans.begin()) ;
            return ans ;
        }
        return ans ;
    }
};