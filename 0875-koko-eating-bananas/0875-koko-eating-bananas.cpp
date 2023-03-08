// long long int#define ll  ;
class Solution {
public:
    
    bool speed(int mid , vector<int>&piles , int h) {
        long long int ans = 0 ;
        for(auto i : piles) {
            ans += (i/mid) ;
            if(i%mid != 0) 
                ans ++ ;
            
            
        }
        return (ans <= h) ;
        
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
       
        int  low = 1 ;
        int high = *max_element(piles.begin() , piles.end()) ;
        // cout<<high<<endl ;
        
        while(low <= high) {
            int mid = low + (high - low)/2 ;
            bool ans = speed(mid , piles , h) ;
            // cout<<mid <<"  "<<ans <<endl ;
//             if(ans == h)
//             {
//                 // int k = speed(mid - 1 , piles) ;
//                if(speed(mid - 1 , piles) == h )
//                    return mid-1; 
//                 return mid ;
                
//             }
               
            if(ans) {
                high = mid -1 ;
            }
            else
                low = mid + 1 ;
        }
        
        return low ;
    }
};