class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int i = 0 , j = 0  , cnt = 0 , n = fruits.size()  , res = INT_MIN , q =0;               unordered_set<int>p;
        vector<int>a(fruits.size() , 0);
        
        while(j<n)
        {
            a[fruits[j]] ++ ;
            if(p.find(fruits[j]) == p.end())
            {
                p.insert(fruits[j]);
            
            }
          
            
            // while(p.size()>2)
            // {
                
                while(j>=i && p.size()>2)
                {
                    a[fruits[i]] --;
                    if(a[fruits[i]] == 0)
                        p.erase(fruits[i]) ;
                    i++ ;
                }
               
            
                             
            // }
         
            res = max(res , j-i+1);
            j++;
        }
        if(res == -2147483648)
            return fruits.size();
        return res ;
    }
};