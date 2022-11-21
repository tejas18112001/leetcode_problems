   

class Solution {
public:
    
    int ans(vector<int>& nums , int l , int m , vector<int>&pfsum)
    { 
        int lmax = INT_MIN , res = INT_MIN ;
     
        //vector<int>pfsum(nums.size()+1);
        pfsum[0] = 0;
        for(int i = 1 ; i<nums.size()+1 ; i++)
        {
            pfsum[i] = pfsum[i-1] + nums[i-1];
        
        }
        
           
       
        for(int i = l+m ; i<pfsum.size() ; i++)
        {
            lmax = max(lmax , pfsum[i-m ] - pfsum[i -m- l]) ; 
            res  = max(res ,lmax + pfsum[i] - pfsum[i-m] ) ;
                
        }
     
        
        return res ;
        
        
    }
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
         vector<int>pfsum(nums.size()+1);
       
        return max(ans(nums , firstLen , secondLen , pfsum) , ans(nums , secondLen , firstLen , pfsum));
    }
};