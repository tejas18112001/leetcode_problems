class Solution {
public:
 
        
        
    vector<int> shuffle(vector<int>&nums, int n ) {
       
        vector<int>p ;   //dynamically p =  [2,3 ,5 ,4 , 3,7]
        
       // int i = 0 ;
        for(int i = 0 ,  j = n ; j<2*n  ; j++ , i++) {
             p.push_back(nums[i]) ;
             p.push_back(nums[j]) ;
             // i++ ;
        }
      
        
        return p;
    }
    
    
};