class Solution {
public:
    

    int  solution(int n ,int k, int ind) {
        if(n == 1)
        {
            return 0;
        }
        
       
        
        
        return (solution(n -1 , k ,ind ) + k)%n;
       
        
        
    }
    int findTheWinner(int n, int k) {
      
       return solution(n , k ,0 )+1 ;
       
    }
};