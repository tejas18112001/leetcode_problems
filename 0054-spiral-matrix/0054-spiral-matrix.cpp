class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int l ,r,t,b,d ;
        b = matrix.size()-1;
        t = 0;
        l = matrix[0].size()-1;
        r = 0;
        // d = 0 (l ->right ),1 (top ->down ),2(right to left ),3 (down to top
        d = 0;
       int total = matrix.size() * matrix[0].size() ;
       int sum = 0 ;
        
      while(total > sum) 
      { 
         
        if(d == 0)
        {
            for(int i = r ; i<=l ; i++)
            {
                ans.push_back(matrix[t][i]) ;
                sum++;
                
            }
            t+=1; 
        }
        
        else if(d == 1) // in top to bottom
        {
            for(int i = t ; i<=b ; i++)
            {
                ans.push_back(matrix[i][l]);
                 sum++;  
            }
             l -= 1 ;
        }
        
        else if(d ==2) // right to left 
        {
            for(int i = l ; i>=r ; i--)
            {
                ans.push_back(matrix[b][i]);
                sum++;
            }
            b -= 1;
        }
        
        else
        {
            for(int i =b ;i>=t ;i--)
            {
                ans.push_back(matrix[i][r]);
                sum++;
            }
            r += 1;
        }
        
        d = (d+1)%4 ;
    }
        return ans ;
    }
};