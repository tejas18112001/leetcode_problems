class Solution {
public:
    int t ;
    
     vector<int>inttopos(int Int , vector<vector<int>>& board) {
         reverse(board.begin() , board.end()) ;
         int r ,c ;
         r = (Int-1) / t ;
         c = (Int-1) % t ;
         if(r %2) {
             c = (t-1-c);
         }
         return {r ,c} ;
     }
    
    
    int solution(vector<vector<int>>& board) {
        vector<bool>p(t*t+2 , false); 
        queue<pair<int ,int>>q ;
        
        q.push({1,0});
        p[1] = true;    
          
        while(!q.empty()) {
            int currpos = q.front().first ;
            int move = q.front().second;
            q.pop();
            
            for(int i =1; i<=6; i++) {
                int nextpos = currpos + i ;
                int r ,c ;
                 
                r = inttopos(nextpos , board)[0];
                c = inttopos(nextpos , board)[1] ;
                if(board[r][c] != -1) {
                    nextpos = board[r][c] ;
                }
                
                if(nextpos == t*t) {
                    return move+1 ;
                }
                
                if(p[nextpos] == false) {
                    p[nextpos] = true ;
                    q.push({nextpos , move+1}) ;
                    
                    
                }
                
                
            }
            
        }
        return -1 ;
    }
    
    
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size() ;
        t = n ;
        if(n*n<=6) return 1;
        cout<<inttopos(31,board)[1];
        
        int r , c ;
        r = c = n;
        return solution(board);
        
         
    }
};