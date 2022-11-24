class Solution {
public:
    
    bool isvalid(vector<vector<char>>& board , int i ,  int j , int index  , string word , int m , int n )
    {
        
        if(i<0 || i>=m || j<0 || j>= n || board[i][j] == '.' || board[i][j] != word[index]) return false ;
       
        
        return true ;
    }
    
    
    
    
    bool search(vector<vector<char>>& board , string word , int i , int j , int index , int m ,int n)
    {
        
        
        if(word.size()  == index)
            return true ;

        
        if(!isvalid(board , i , j , index , word , m , n)) return false ;
        // if(word.size() ==1 && board[i][j] == word[index])
        //     return true ;
       // char ch = board[i][j];
        
        board[i][j] = '.';
        bool temp = false ;
        int x[4] = {0,0,-1,1} ;
        int y[4] = {-1 ,1, 0 ,0};
       
        for(int k = 0 ; k<4 ; k++)
        {
            
           temp = temp || search(board , word , i+x[k] , j+y[k] ,  index+1 , m, n );
          
        }
        
        board[i][j] = word[index] ; 
        
        return temp ; ;
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0 ; i<board.size() ; i++)
        {
            for(int j = 0 ; j<board[0].size() ; j++)
            {
                if(board[i][j] == word[0])
                     if(search(board , word , i ,  j , 0 , board.size() , board[0].size()) ){
                         
                        return true ;
                     }
            }
        }
        return false;
    }
};