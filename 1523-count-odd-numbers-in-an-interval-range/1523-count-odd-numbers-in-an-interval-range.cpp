class Solution {
public:
    int countOdds(int low, int high) {
      
        int cnt =  (high+1)/2 - low /2 ;
        return cnt ;
    }
};