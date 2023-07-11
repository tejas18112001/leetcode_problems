class Solution {
public:
    
    int find(int num) {
        int ans= 0 ;
        while(num>0) {
            int rem = num%10 ;
            ans  += rem*rem ;
            num /= 10 ;
        }
        return ans ;
    }
    bool isHappy(int n) {
        int slow = n , fast = n ;
        slow = find(n) ;
        fast = find(find(n)) ;
        
        while(slow != fast) {
            slow = find(slow) ;
            fast = find(find(fast)) ;
        };
        
        if(slow == 1) return true ;
        return false ;
    }
};