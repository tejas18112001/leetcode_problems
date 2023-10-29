class Solution {
public:
    int reverse(int x) {
        int num = 0 ;
         while(x) {
             int digit = x%10 ;
             x = x/10 ;
             if(num > INT_MAX / 10 || num == INT_MAX && digit > 7) return 0 ;
             else if(num < INT_MIN/10 || num == INT_MIN && digit < -8) return 0 ;          
             else
               num = num*10 + digit ;
             
     
         }
        return num ;
    }
};