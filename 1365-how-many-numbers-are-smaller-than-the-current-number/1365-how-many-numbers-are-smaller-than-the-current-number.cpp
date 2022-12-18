class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& N) {
        int n =N.size() ;
       
        vector<int>ans(n,0) ;
        vector<int>p(510 , -1); 
        
        for(int i = 0 ; i<n; i++){
            ans[i] = N[i] ;
        }
        sort(ans.begin() , ans.end()) ;
        
        for(int i = 0 ; i<n ; i++) {
            if(p[ans[i]] == -1 ) p[ans[i]]  = i ;
            
        }
        
        
        for(int i = 0 ; i<n; i++){
            ans[i] = p[N[i]] ;
        }
       
      
       
        return ans;
    }
};