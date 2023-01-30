class Solution {
public:
//     int fibonacci(int n) {
//         if(n == 0) return 0;
//         if(n == 1) return 1 ;
//         if(n == 2) return 1 ;
//         int a = fibonacci(n-1) ;
//         int b = fibonacci(n-4) ;
      
//         return a + a + b ;
//     }
    
    int tribonacci(int n) {
       int a = 0 , b = 1 , c = 1 , ans ;
       
        if(n == 0) return a ;
        if(n == 1 || n ==2) return 1 ;
        
        for(int i = 3; i<=n ;i++) {
           ans = a + b + c ;
           a = b ;
           b = c ;
           c = ans ;
          
       }
        return ans; 
    }
};