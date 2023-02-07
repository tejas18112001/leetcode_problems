class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0 ;
        if(n == 1) return 1 ;
       
        int a = 0 , b = 1 , c = a+b;
        n = n-2 ;
        while(n--) {  //n 1
           a = b ;
           b = c ;
           c = a+b ;
            
        }
        return c ;
    }
};