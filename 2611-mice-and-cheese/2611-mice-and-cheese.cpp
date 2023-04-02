class Solution {
public:
    
 
    
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        priority_queue<int>pq ;
        int ans = 0 ;
        ans =  accumulate(reward2.begin() , reward2.end() ,0) ;\
         
        for(int i = 0 ; i<reward1.size() ; i++) {
            pq.push(reward1[i] - reward2[i]) ;
        }
        
        while(k > 0) {
            ans += pq.top() ;
            pq.pop() ;
            k-- ;
        }
        
        return ans ;
    }
};