class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int l , r , t, b ;
        r= 0 , l = matrix[0].size() ;
        t = 0 , b = matrix.size() ;
        
        vector<int>ans ;
        int d= 0 ;
        
        int sum = 0 ;
        int length = l*b ;
        l-- , b-- ;
        
        while(sum < length) {
            
            if(d == 0) {
                for(int i =  r ; i<= l ; i++) {
                    sum++ ;
                    ans.push_back(matrix[t][i]) ;
                }
                t += 1 ;
            }
            
            else if(d == 1) {
                for(int i = t ; i <= b ; i++) {
                    sum++ ;
                    ans.push_back(matrix[i][l]) ;
                }
                l = l-1 ;
            }
            
            else if(d == 2) {
                for(int i = l ; i>= r ; i--) {
                    sum++ ;
                    ans.push_back(matrix[b][i]) ;
                }
                b = b-1 ;
            }
            
            else {
                
                for(int i = b ; i >= t ; i-- ) {
                    sum ++ ;
                    ans.push_back(matrix[i][r]) ;
                    
                }
                r += 1 ;
                
                
            }
            d = (d+1)%4 ;
        }
        
        return ans ;
    }
};