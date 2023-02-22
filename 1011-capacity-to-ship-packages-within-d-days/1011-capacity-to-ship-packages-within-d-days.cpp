class Solution {
public:
    
    int nofday(vector<int>& weights , int mid  )
    { 
        int day =1 ;
        int sum = 0 ;
        for(auto i : weights)
        {
            sum+= i ;
            if(sum > mid)
            {
                day++ ;
                sum = i ;
            }
        }
        return day ;
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
      int low = *max_element(weights.begin() , weights.end()) ;//- weights.begin() ;
      int high = accumulate(weights.begin() , weights.end() ,0) ;
    
      while(low < high)
      {
          int mid = low + (high - low) /2 ;
          
          if(nofday(weights , mid) >  days){
              //high = mid ;
              low = mid +1 ;
              
          }
          else
              high = mid;
          
      }
        return low ;
    }
};