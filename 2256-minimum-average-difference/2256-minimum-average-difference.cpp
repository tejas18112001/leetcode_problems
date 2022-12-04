class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n = nums.size() ;
       
        int res = INT_MAX ;
        int index = -1 ;
        long long int  sum = 0 ;
        
        for(int i = 0 ; i<n ; i++)
        {
          
          
          sum+= nums[i] ;   
        }
        
        int s ;
        long long int currsum = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
           
            currsum += nums[i] ;
            int avg1 = currsum / (i+1) ;
            if(i == n-1)
            {
                if(res > avg1)
                   return n-1;
                else
                    break; 
            }
            
            int avg2 = (sum - currsum) / (n-i-1); 
            s = abs(avg1 - avg2) ;
            if(res > s )
            {
                res = s ; 
                index = i ;
            }
               
        }
        
         
       
        
        return index ; 
    }
};