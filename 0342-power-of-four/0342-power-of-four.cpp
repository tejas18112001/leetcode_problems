class Solution {
public:
    
    //4 2 1 0
    int solution(int num ) {
       double num1 = double(num) ;
        while(num1 >0) {
            if(num1 == 1) return 1 ;
            num1 /= 4 ;
        }
        return 0 ;
//         if(n == 0)
//             return 1;
//         if(t*t > num) return 0 ;
         
//         long long int t ;
//         t = solution(num , n/2) ;
        
        
//         if(t*t == num || t*t == -1*num  || 4*t*t == num || 4*t*t == -1*num) return 1 ;
        
//         if(t*t %2) return 4*t*t ;
//         return t*t ;
        
    }
    bool isPowerOfFour(int n) {
         return solution(n) ;
       
    }
};