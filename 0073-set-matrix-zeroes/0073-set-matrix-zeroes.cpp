class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size() ;
        int cols = matrix[0].size() ;
        
        vector<int>a(rows , 1) ;
        vector<int>b(cols , 1) ;
        
        for(int i = 0 ; i<rows ; i++)
            for(int j = 0 ; j<cols ; j++)
                if(matrix[i][j] == 0){
                    a[i] = 0 ;
                    b[j] = 0 ;
                    
                }
        
        for(int i = 0 ; i<rows ; i++)
            for(int j = 0 ; j<cols ; j++)
                if(a[i] == 0 || b[j] == 0)
                    matrix[i][j] = 0 ;
       
      
                    
    }
};