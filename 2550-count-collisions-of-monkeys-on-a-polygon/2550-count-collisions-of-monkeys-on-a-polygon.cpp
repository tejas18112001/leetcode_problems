class Solution {
public:
    long long mod = 1e9+7 ;
    
    long long  pow(long long n) {
        if(n ==1)return 2 ;
        long long t = pow(n/2) ;
        if(n%2 == 0) return t*t %mod ;
        return (2*(t*t)%mod )%mod ;
    }
    
    int monkeyMove(int n) {
        
       long long ans = (pow(n)-2)%mod ;
       if(ans <0) return (pow(n) + mod -2 ) %mod ;
       return ans ;
        
    }
};