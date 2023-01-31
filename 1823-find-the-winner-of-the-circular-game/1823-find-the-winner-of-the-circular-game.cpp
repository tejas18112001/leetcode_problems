class Solution {
public:
    

    void  solution(vector<int>&p ,int start , int k) {
        if( p.size() == 1)
        {
            return ; 
        }
        start += k ;
        int s = p.size() ;
        start %= s;
        p.erase(p.begin()+start) ;
        solution( p , start , k ) ;
        return ;
        
        
    }
    int findTheWinner(int n, int k) {
      vector<int>p(n ) ;
        k-- ;
        for(int i = 1 ; i<=n;i++) {
            p[i-1] = i ;
        }
      
        solution( p ,0, k   ) ;
        return p[0] ;
       
    }
};