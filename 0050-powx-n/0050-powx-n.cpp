class Solution {
public:
    
    

    
    double solution(double x ,int n) {
        if(n== 0) return 1 ;
        if(n ==1) return x ;
        double t = solution(x, n/2);
        if(n%2 == 0 )  return t*t ;
        return n<0 ?  1/x*t*t : x*t*t ;
      
       
      
        
    };
    
    double myPow(double x, int n) {
        // if(n < 0)return 1/solution(x,-1*n) ;
        return solution(x ,n) ;
    }
};