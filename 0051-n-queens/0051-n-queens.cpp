class Solution {
public:
    /* ⏲\U0001f4a1 complexity analysis ⬇ 
    isSafe function take 3.O(n) time complexity
      
    isSafe called inside solution function()
    so overall time complexity is O(n!) 3*O(n)*O(n) ~= O(N2) ;
    */
    vector<vector<string>>ans ;
//     bool isSafe(int row , int col , int n , vector<string>&temp) {
//         int r ,c ;
//         r = row , c = col ;
//         // checking north west ↖   
//         // row ⬇ and col ⬇
//         while(row >= 0 && col >= 0 ){
            
//             if(temp[row][col] == 'Q' )
//                 return false ;
//             row -- ,col-- ;
//         }
        
//         //restore origional position of row and col ;
//         row = r  , col = c ;
        
//         // checking west south ↙
//         // row ⬆ col ⬇
//         while(row < n && col>=0){
//             if(temp[row][col] == 'Q')
//                 return false ;
//             row ++ , col-- ;
//         }
        
        
//         //restore origional position of row and col ;
//         row = r  , col = c ;
//         //checking ⬅ direction
//         // row constant col ⬇
//         while(col>= 0) {
//              if(temp[row][col] == 'Q')
//                 return false ;
//               col-- ;
//         }
//         return true ;
//     }
    void solution(
         int col , vector<string>temp , int  n , vector<int>rowLeft ,                              vector<int>upperDiagonal ,    vector<int>lowerDiagonal
    ) {
        
        for(int row = 0 ; row<n ;row++) {
            if(col == n){
                ans.push_back(temp) ;
                return ;
            }
            if(rowLeft[row] == 0 && upperDiagonal[row+col] == 0 &&  lowerDiagonal[n-1 + (row - col )] == 0 )
            {
                temp[row][col] = 'Q' ;
               
                rowLeft[row] = 1 ;
                upperDiagonal[row+col] = 1 ;
                lowerDiagonal[n-1 + (row - col )] = 1 ;
                 solution(col+1 , temp ,n , rowLeft ,upperDiagonal , lowerDiagonal) ;
                 rowLeft[row] = 0 ;
                upperDiagonal[row+col] = 0 ;
                lowerDiagonal[n-1 + (row - col )] = 0 ;
                temp[row][col] = '.' ;
                
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>temp(n) ;
        
        string s(n , '.');
        for(int i = 0 ; i<n ;i++)
            temp[i] = s ;
   vector<int>rowLeft(n ,0) ;
   vector<int>upperDiagonal(n+n ,0) ; 
   vector<int>lowerDiagonal(n+n , 0) ;
        solution(0 , temp ,n ,rowLeft ,upperDiagonal , lowerDiagonal) ;
        return ans ;
    }
};