class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        sort(stones.begin()  , stones.end()) ;
        sort(jewels.begin() , jewels.end()) ;
        
        
        int i = 0 , j = 0 ;
        int ans = 0 ; 
        while(i < stones.size()) {
            
            while(j<jewels.size() && jewels[j] < stones[i]) j++ ;
            if(jewels[j] == stones[i]) ans++ ;
            i++ ;
        }
        
        return ans ;
    }
};