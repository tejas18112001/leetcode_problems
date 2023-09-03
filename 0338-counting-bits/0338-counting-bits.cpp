class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans ;
        
        for(int i = 0 ; i<= n ; i++) {
            int cnt = 0 ; 
            int num = i ;
            while(num) {
               
                if(num != 0 && num %2 == 1)cnt++ ;
                num = num / 2 ;
               
            }
            
            ans.push_back(cnt) ;
        }
        return ans ;
    }
};