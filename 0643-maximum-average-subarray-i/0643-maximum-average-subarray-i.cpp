class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
   
        double res = INT_MIN;
       
        double sum = 0;
        int i = 0 , j = 0;
        while(j<nums.size())
        {
            
            sum = sum + nums[j] ;
            //increasing the size of an window
            if( j-i+1 > k )
            {
                sum -= nums[i]  ;
                i++;
               
            }
            
            if(j-i+1 ==k)
              res =  max(res , sum);
        
            j++;
        }
        return res/k;
    }
};