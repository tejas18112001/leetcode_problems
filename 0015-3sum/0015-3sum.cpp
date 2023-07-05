class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        
        vector<vector<int>>ans ;
        // unordered_map<int , int>mp ;
       
        
//         for(auto i : nums) {
//             mp[i]++;
//         }
        
//         if(mp[0] == j+1) return {{0,0,0}} ;
        
        
        
        // sort(nums.begin() , nums.end()) ; // nlog(N) ;
//         while(i < j) { 
//             if(mp[nums[i]] >0 && mp[nums[j]]>0) {
//                   int sum = nums[i] + nums[j] ;
                  
//                   mp[nums[i]]-- , mp[nums[j]]-- ;
//                   if(mp[0 - sum] >0) {
//                       // mp[0-sum]-- ;
//                       ans.push_back({nums[i] , nums[j] , -1*sum}) ;
//                       i++ ;
//                   } else {
                      
//                       mp[nums[i]] ++ , mp[nums[j]] ++ ;
                      
//                       if(sum > 0) {
                          
//                           j-- ;
//                       } else if(sum <  0) {
                         
//                           i++;
//                       }
                      
                      
//                   }
                
                
//             }   else {
            
//             if(mp[nums[i]] == 0) 
//             {   
                
//                 i++ ;
//             }
//             if(mp[nums[j]] == 0)
//             {
//                 j-- ;
//             }
                
//         }
//         }
        
        set<vector<int>>s ;
        sort(nums.begin() , nums.end()) ; // nlog(N) ;
        for(int i = 0 ; i<nums.size()-1 ; i++) {
           
           int  j = nums.size()-1  , k = i+1 ;
            
            while(k<j) {
                int sum  = nums[i] + nums[j] + nums[k];
                if(sum > 0 ) {
                    j-- ;
                }
              
                else if(sum  == 0) {
                    s.insert({nums[i] , nums[k] , nums[j]}) ;
                    j-- , k++ ;
                }
                
                else {
                    k ++ ;
                }
               
                
                

                
            }
        }
        
        for(auto i : s) {
            ans.push_back(i) ;
        }
        
        return ans ;
    }
};