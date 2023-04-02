class Solution {
public:
    
 
    
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        priority_queue<int>pq ;
        int ans = 0 ;
        
        for(int i = 0 ; i<reward1.size() ; i++) {
            // pq.push(reward1[i] - reward2[i]) ;
            reward1[i] -= reward2[i] ;
            ans += reward2[i] ;
        }
        
        sort(reward1.begin() , reward1.end()) ;
      
        while(k >0 ) {
            ans += reward1.back() ;
            reward1.pop_back() ;
            k-- ;
          
        }
      
        
        return ans ;
    }
};