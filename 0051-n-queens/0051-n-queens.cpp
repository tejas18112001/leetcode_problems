class Solution {
public:
    
    vector<vector<string>>ans ;
    bool isSafe(int row , int col , int n , vector<string>&temp) {
        int r ,c ;
        r = row , c = col ;
        // checking north west ↖   
        // row ⬇ and col ⬇
        while(row >= 0 && col >= 0 ){
            
            if(temp[row][col] == 'Q' )
                return false ;
            row -- ,col-- ;
        }
        
        //restore origional position of row and col ;
        row = r  , col = c ;
        
        // checking west south ↙
        // row ⬆ col ⬇
        while(row < n && col>=0){
            if(temp[row][col] == 'Q')
                return false ;
            row ++ , col-- ;
        }
        
        
        //restore origional position of row and col ;
        row = r  , col = c ;
        //checking ⬅ direction
        // row constant col ⬇
        while(col>= 0) {
             if(temp[row][col] == 'Q')
                return false ;
              col-- ;
        }
        return true ;
    }
    void solution(int col , vector<string>temp , int  n) {
        
        for(int row = 0 ; row<n ;row++) {
            if(col == n){
                ans.push_back(temp) ;
                return ;
            }
            if(isSafe(row , col , n , temp))
            {
                temp[row][col] = 'Q' ;
                solution(col+1 , temp ,n) ;
                temp[row][col] = '.' ;
                
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>temp(n) ;
        
        string s(n , '.');
        for(int i = 0 ; i<n ;i++)
            temp[i] = s ;
        solution(0 , temp ,n) ;
        return ans ;
    }
};