class Solution {
public:
    int strStr(string h, string ne) {
        
        int n = h.size() , n1 = ne.size() ;
        if(n < n1) return -1 ;
        int ans ;
        int i = 0 ;
        int d = 0 ; 
        while(i < n  ){
            // int d = i ;
            // ans = -1 ;
            int ind = 0;
//             if(h[i] == ne[ind]) {
//               ans = i ;
            
              while(i<n && ind < n1 && h[i] == ne[ind]) {
              if(ind == n1-1 && h[i] == ne[ind])
                  return d ;
                  ind ++ , i++ ;
              // if(h[i] == ne[ind]) {
              //     ind++ , i++ ; 
              // }
               // else {
               //     break ;
               // }
              
              }
           
           
            
    
            d++;
            i = d ;
        }
        return -1;
    }
};