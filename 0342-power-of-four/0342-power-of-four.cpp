class Solution {
public:
    
    //4 2 1 0
    int solution(int num ) {
      if(num == 0) return 0;
       if(num  == 1) return 1 ;
        if(num%4) return 0 ;
        return solution(num /4) ;
    }
    
    bool isPowerOfFour(int n) {
         return solution(n) ;
       
    }
};