class Solution {
public:
    int c;
    int n ;
   
    
    void dsf(int index , vector<vector<int>>&a , vector<bool>&visit )
    {
        visit[index] = true;
        for(int i = 0 ; i< n ; i++)
        {
            if(visit[i] ==false && (a[index][0] == a[i][0] || a[index][1] == a[i][1]) )
                dsf(i , a,visit );
        }
    }
   
    int removeStones(vector<vector<int>>&a) {
         n = a.size();
         c = 0 ;
         vector<bool>visit(n , false);
        
        for(int i = 0 ; i<n ; i++)
        {
            if(visit[i] == false){
             c++ ;
            dsf(i , a , visit);
            }
            
        }
        
       return n-c ;
    }
};


