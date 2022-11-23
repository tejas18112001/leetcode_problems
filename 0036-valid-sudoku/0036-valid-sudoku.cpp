class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
      int rows[9][9] = {0} , cols[9][9] = {0} , cubes[3][3][9] = {0};
       
       for(int i = 0; i<9 ; i++)
       {
           for(int j = 0 ; j<9 ; j++)
           {
               if(board[i][j] != '.')
               {  
                   
                  int number=board[i][j]-'1';  //
                   
                 
                  if(rows[i][number]++ || cols[j][number]++ || cubes[i/3][j/3][number]++ )
                      return false ;
                  
                   
				
               }
           }
       }
        
        
        
        
        
        return true ;
    }
};