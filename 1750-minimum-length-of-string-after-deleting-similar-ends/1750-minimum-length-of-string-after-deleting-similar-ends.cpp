class Solution {
public:
    int minimumLength(string s) {
        
        int n = s.size() ;
        int i = 0 , j = n-1 ; 
     
        while(i < j) {
            // cout<<i<<" "<<j<<endl ;  
            // cout<<(s[i]==s[j])<<"\n";
            if(s[i] == s[j]) {
                  
                while(i+1<j && s[i] == s[i+1]) {
                    // cout<<"yes 1\n" ;
                    i++ ;
                }
                
                while(i < j-1 && s[j] == s[j-1]) {
                    // cout<<"yes 2\n" ;
                    j-- ;
                }
               
            } else break ;
            
            i++ , j-- ;
                   
        }
        
        cout<<i<<" "<<j<<endl ;  
        if(i > j) return 0 ;
         
        s = s.substr(i , j-i+1) ;
        return s.size() ;
        
    }
};